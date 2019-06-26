package main

import "fmt"

func powerSeries(a int) (int, int, error) {
	square := a * a
	cube := a * a * a
	return square, cube, nil
}

func main() {
	fmt.Println("Tuple example in Go")
	var square int
	var cube int
	var err error
	square, cube, err = powerSeries(3)
	fmt.Println(square)
	fmt.Println(cube)
	fmt.Println(err)
}
