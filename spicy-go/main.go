package main

import (
	"bufio"
	"fmt"
	"os/exec"
)

func main() {
	cmd := exec.Command("spicy-driver", "my_http.hlto")

	stdin, _ := cmd.StdinPipe()
	stdout, _ := cmd.StdoutPipe()
	_ = cmd.Start()

	// send data (http request example)
	go func() {
		stdin.Write([]byte("GET /index.html HTTP/1.1\r\n"))
		// stdin.Write([]byte("GET /index.html HTTP/1.1\r\nHost: example.com\r\n\r\n"))
		stdin.Close()
	}()

	// receive log
	scanner := bufio.NewScanner(stdout)
	for scanner.Scan() {
		fmt.Println("[Spicy Log]", scanner.Text())
	}

	_ = cmd.Wait()
}
