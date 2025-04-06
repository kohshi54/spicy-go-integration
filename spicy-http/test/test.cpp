#include "gtest/gtest.h"
#include "spicy_http.hpp"

class SpicyHTTPTest : public ::testing::Test {
protected:
    
};

TEST_F(SpicyHTTPTest, simple_test) {
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
	ft_hello();
    std::cout.rdbuf(old);
	EXPECT_EQ(buffer.str(), "hello\n");
}

TEST_F(SpicyHTTPTest, parse_ok_test) {
	std::istringstream testInput("GET /index.html HTTP/1.1\r\n\r\n");
	std::stringstream buffer;
	std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
	SpicyHTTPParser(testInput);
	std::cout.rdbuf(oldCoutBuffer);
	EXPECT_EQ(buffer.str(), "GET, /index.html, 1.1\n");
}

TEST_F(SpicyHTTPTest, parse_error_test) {
	std::istringstream testInput("GET a /index.html HTTP/1.1\r\n");
	std::stringstream buffer;
	std::streambuf* oldCerrBuffer = std::cerr.rdbuf(buffer.rdbuf());
	SpicyHTTPParser(testInput);
	std::cerr.rdbuf(oldCerrBuffer);
	EXPECT_EQ(buffer.str(), "parse error\n");
}

TEST_F(SpicyHTTPTest, parse_ok_test2) {
	std::istringstream testInput("GET /index.html HTTP/1.1\r\nHost: example.com\r\n\r\n");
	std::stringstream buffer;
	std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
	SpicyHTTPParser(testInput);
	std::cout.rdbuf(oldCoutBuffer);
	EXPECT_EQ(buffer.str(), "GET, /index.html, 1.1\nHost:example.com\n");
}

// Body with Content-Length should be ignored
TEST_F(SpicyHTTPTest, parse_ok_test3) {
	std::istringstream testInput("GET /index.html HTTP/1.1\r\nHost: example.com\r\n\r\nhello=world");
	std::stringstream buffer;
	std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
	SpicyHTTPParser(testInput);
	std::cout.rdbuf(oldCoutBuffer);
	EXPECT_EQ(buffer.str(), "GET, /index.html, 1.1\nHost:example.com\n");
}

TEST_F(SpicyHTTPTest, parse_with_content_length1) {
	std::istringstream testInput("GET / HTTP/1.1\r\nHost: example.com\r\nContent-Length: 11\r\n\r\nhello=world");
	std::stringstream buffer;
	std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
	SpicyHTTPParser(testInput);
	std::cout.rdbuf(oldCoutBuffer);
	EXPECT_EQ(buffer.str(), 
			"GET, /, 1.1\n"
			"Host:example.com\n"
			"Content-Length:11\n"
			"hello=world\n");
}

// Content-Length is less than actual body size => Only pecified Content-Length is read
TEST_F(SpicyHTTPTest, parse_with_content_length2) {
	std::istringstream testInput("GET / HTTP/1.1\r\nHost: example.com\r\nContent-Length: 8\r\n\r\nhello=world");
	std::stringstream buffer;
	std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
	SpicyHTTPParser(testInput);
	std::cout.rdbuf(oldCoutBuffer);
	EXPECT_EQ(buffer.str(), 
			"GET, /, 1.1\n"
			"Host:example.com\n"
			"Content-Length:8\n"
			"hello=wo\n");
}

// Content-Length is larger than actual body size => The message is considered to be incompolete
TEST_F(SpicyHTTPTest, parse_with_content_length3) {
	std::istringstream testInput("GET / HTTP/1.1\r\nHost: example.com\r\nContent-Length: 15\r\n\r\nhello=world");
	std::stringstream buffer;
	std::streambuf* oldCerrBuffer = std::cerr.rdbuf(buffer.rdbuf());
	SpicyHTTPParser(testInput);
	std::cerr.rdbuf(oldCerrBuffer);
	EXPECT_EQ(buffer.str(), "parse error\n");
}

int main(int argc, char **argv) {
	hilti::rt::init();
	spicy::rt::init();
    ::testing::InitGoogleTest(&argc, argv);
	int result = RUN_ALL_TESTS();
	spicy::rt::done();
	hilti::rt::done();
    return result;
}