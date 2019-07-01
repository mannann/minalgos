package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	fmt.Println("File size in go.")
	filesize, err := os.Stat("text.txt")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println(filesize.Size())
}
