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
	stderr, _ := cmd.StderrPipe()
	_ = cmd.Start()

	// stderr log
	go func() {
		scanner := bufio.NewScanner(stderr)
		for scanner.Scan() {
			fmt.Println("[Spicy STDERR]", scanner.Text())
		}
	}()

	// stdout log
	go func() {
		scanner := bufio.NewScanner(stdout)
		for scanner.Scan() {
			fmt.Println("[Spicy Log]", scanner.Text())
		}
	}()

	// send data (http request example)
	go func() {
		stdin.Write([]byte("GET /index.html HTTP/1.1\r\n"))
		// stdin.Write([]byte("GET /index.html HTTP/1.1\r\nHost: example.com\r\n\r\n"))
		stdin.Close()
	}()

	_ = cmd.Wait()
}
