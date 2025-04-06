#include "spicy_http.hpp"

void ft_hello() {
	std::cout << "hello" << std::endl;
}

void ft_http() {
	std::cout << "GET, /index.html, 1.0" << std::endl;
}

void SpicyHTTPParser(std::istream& in) {
	hilti::rt::init();
	spicy::rt::init();
	spicy::rt::Driver driver;
	auto parser = driver.lookupParser("MyHTTP::RequestLine");
	assert(parser);

	try {
		// std::ifstream in("/dev/stdin", std::ios::in);
		driver.processInput(**parser, in);
	} catch ( const std::exception& e ) {
		// std::cerr << e.what() << std::endl;
		std::cerr << "parse error" << std::endl;
	}
	spicy::rt::done();
	hilti::rt::done();
}
