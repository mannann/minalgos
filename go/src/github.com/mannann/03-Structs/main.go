package main

import "fmt"

type Book struct {
	author string
	title  string
	pages  int
}

func main() {
	fmt.Println("Structs in Go Lang")
	bookOne := Book{}
	bookOne.author = "Chetan Bhagat"
	bookOne.title = "Two States"
	bookOne.pages = 350
	fmt.Println("This book", bookOne.title, "is written by", bookOne.author)
}
