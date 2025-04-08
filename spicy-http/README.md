# Spicy-HTTP

An HTTP protocol parser implemented using Spicy.

---

## What is Spicy?

Spicy is a domain-specific language (DSL) designed for protocol parsing.  
By writing a parser in Spicy, you can generate efficient C++ code via the Spicy compiler (`spicyc`).  
This improves both development speed and error handling.  

In this project, the parsing rules are defined in [`my_http.spicy`](spicy-http/my_http.spicy).

---
## Supported Features
This HTTP protocol parser is based on RFC 9112.
It currently supports:
- [x] Request line parsing
- [x] Header parsing
- [x] Body parsing (based on Content-Length)

## Not Yet Supported
- [ ] Transfer-Encoding
- [ ] Reseponse status line parsing

---

## Build

The provided [`Makefile`](spicy-http/Makefile) uses `spicyc` to compile the Spicy script into C++ code, which is placed in the [`src`](spicy-http/src) directory.  
It then links the generated code with custom C++ source files to produce the executable `./spicy_http`.

To build:

```bash
make
```

## Run

The generated parser reads raw HTTP request bytes from standard input.

Example:
```bash
echo "GET / HTTP/1.1\r\nHost: example.com\r\nContent-Length: 11\r\n\r\nhello=world" | ./spicy_http
```

Sample output:
<img width="1218" alt="Runtime Example" src="https://github.com/user-attachments/assets/29e83f7a-cec1-445a-8ad5-767a600e0b32" />

## Test

Tests are written using GoogleTest.
[`CMakeLists.txt`](spicy-http/CMakeLists.txt) is used to configure and build the test environment.
All test cases are located in the [`test/`](spicy-http/test/) directory and can be compiled and run with:
```bash
make test
```

To add a new test case, either update [`test/test.cpp`](spicy-http/test/test.cpp) or add a new source file and include it in CMakeLists.txt.

Sample test output:
<img width="1468" alt="Test Example" src="https://github.com/user-attachments/assets/437748ba-17de-4504-9fda-4437cf5c4d3c" />

Tested in the following environment:\
<img width="558" alt="image" src="https://github.com/user-attachments/assets/f2971a20-e568-4a80-86ce-8266ccdb97d3" />
