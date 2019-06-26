package main

import (
	"container/list"
	"fmt"
)

func main() {
	fmt.Println("List in Go lang")

	var intList list.List
	intList.PushBack(11)
	intList.PushBack(12)
	intList.PushBack(13)

	for i := intList.Front(); i != nil; i = i.Next() {
		fmt.Println(i.Value.(int))
	}

	fmt.Println()
}
