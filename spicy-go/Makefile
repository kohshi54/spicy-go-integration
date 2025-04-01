GO := $(shell which go)
GOFLAGS := CGO_ENABLED=0

.PHONY: build run clean parser

build: main.go my_http.hlto
	$(GO) build -o spicy-go main.go

run: build
	./spicy-go

clean:
	rm -f spicy-go

my_http.hlto: my_http.spicy
	spicyc -j -o my_http.hlto my_http.spicy
