package main

import "fmt"

func bubbleSort(arr []int) {
	var flag = 0
	var temp = 0
	for i := 0; i < len(arr)-1; i++ {
		flag = 0
		for j := 0; j < len(arr)-i-1; j++ {
			if arr[j] > arr[j+1] {
				temp = arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = temp
			}
			flag = 1
		}
		if flag == 0 {
			break
		}
	}
}

func displayArray(arr []int) {
	for i := 0; i < len(arr); i++ {
		fmt.Printf("%d ", arr[i])
	}
	fmt.Println()
}

func main() {
	fmt.Println("Bubble Sort in Go")
	arr := []int{1, 3, 5, 2, 4, 7, 6, 8, 10, 11}
	displayArray(arr)
	bubbleSort(arr)
	displayArray(arr)
}
