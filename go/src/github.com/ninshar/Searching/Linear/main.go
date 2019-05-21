package main

import "fmt"

func LinearSearch(arr []int, num int) {
	var res int16
	for i := 0; i < len(arr); i++ {
		if arr[i] == num {
			res = 1
		}
	}
	if res == 1 {
		fmt.Println("Number Found!!!")
	} else {
		fmt.Println("Number not found!!!")
	}
}

func main() {
	fmt.Println("Linear Search in Go Lang.")
	arr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 11}
	LinearSearch(arr, 10)
}
