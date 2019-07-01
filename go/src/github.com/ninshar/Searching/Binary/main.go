package main

import "fmt"

func BinarySearch(arr []int, num int) {
	min := 0
	mid := 0
	var res int
	max := len(arr)
	for min <= max {
		// mid = (min + max) / 2
		mid = min + (max-min)/2
		if arr[mid] == num {
			res = 1
			break
		} else if arr[mid] > num {
			max = mid - 1
		} else {
			min = mid + 1
		}
	}
	if res == 1 {
		fmt.Println("Number found")
	} else {
		fmt.Println("Number not found")
	}
}

func main() {
	fmt.Println("Linear Search in Go Lang.")
	arr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	BinarySearch(arr, 10)
}
