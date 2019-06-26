package main

import (
	"fmt"
	"math"
	"time"
)

func PrimeVersionOne(num int) bool {
	if num == 1 {
		return false
	}
	for i := 2; i < num; i++ {
		if num%i == 0 {
			return false
		}
	}
	return true
}

func PrimeVersionTwo(num int) bool {
	if num == 1 {
		return false
	}
	mid := int(math.Floor(math.Sqrt(float64(num)))) + 1
	for i := 2; i < mid; i++ {
		if num%i == 0 {
			return false
		}
	}
	return true
}

func PrimeVersionThree(num int) bool {
	if num == 1 {
		return false
	}
	if num == 2 {
		return true
	}
	if num > 2 && num%2 == 0 {
		return false
	}
	mid := int(math.Floor(math.Sqrt(float64(num)))) + 1
	for i := 3; i < mid; i = i + 2 {
		if num%i == 0 {
			return false
		}
	}
	return true
}

func main() {
	fmt.Println("Prime numbers in Go Lang")
	s := time.Now()
	list := 100000
	for j := 0; j < list; j++ {
		// 		fmt.Println(j, PrimeVersionOne(j))
		// 		PrimeVersionOne(j)
		// 		PrimeVersionTwo(j)
		PrimeVersionThree(j)
	}
	t := time.Now()
	fmt.Println(t.Sub(s))
}
