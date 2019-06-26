package main

import (
	"fmt"
)

func main() {
	fmt.Println("Fibonacci Series in Go Lang")
	n1 := 0
	n2 := 1
	temp := 0
	num := 50
	fmt.Println(n1)
	for i := 1; i <= num; i++ {
		fmt.Println(n2)
		temp = n1 + n2
		n1 = n2
		n2 = temp
	}
	fmt.Println()
}
