package main

import "fmt"

func displaySort(arr []int) {
	for i := 0; i < len(arr); i++ {
		fmt.Printf("%d ", arr[i])
	}
	fmt.Println()
}

func insertionSort(arr []int) {
	j := 0
	x := 0
	for i := 0; i < len(arr); i++ {
		j = i - 1
		x = arr[i]
		for j > -1 && arr[j] > x {
			arr[j+1] = arr[j]
			j--
		}
		arr[j+1] = x
	}
}

func main() {
	fmt.Println("Insertion Sort in Go Lang.")
	arr := []int{11, 14, 2, 6, 3, 9, 7, 8, 10}
	displaySort(arr)
	insertionSort(arr)
	displaySort(arr)
}
