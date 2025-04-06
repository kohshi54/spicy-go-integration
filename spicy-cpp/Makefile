all: a.out

a.out: my_http.cc my_http.spicy
	spicy-build -S -o a.out my_http.cc my_http.spicy

test:
	@echo "Test1"
	echo "GET /index.html HTTP/1.0" | ./a.out
	@echo "Test2"
	echo 'Hello, World!' | ./a.out
