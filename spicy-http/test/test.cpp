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

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}