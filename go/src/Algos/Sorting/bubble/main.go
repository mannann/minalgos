package main

import "fmt"

func bubbleSort(arr []int) {
	var temp int
	for i := 0; i < len(arr)-1; i++ {
		for j := 0; j < len(arr)-i-1; j++ {
			if arr[j] > arr[j+1] {
				temp = arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = temp
			}
		}
	}
}

func displayArray(arr []int) {
	for _, val := range arr {
		fmt.Printf("%d ", val)
	}
	fmt.Println()
}

func main() {
	fmt.Println("Bubble Sorting in Go Lang")
	arr := []int{1, 3, 2, 5, 4, 8, 7, 6, 10, 9}
	displayArray(arr)
	bubbleSort(arr)
	displayArray(arr)
}
