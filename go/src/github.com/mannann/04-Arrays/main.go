package main

import "fmt"

func main() {
	fmt.Println("Arrays and Listing in Go")

	friends := [...]string{"John", "Jane", "Peter", "Bruce", "Tony"}
	new_friends := friends
	friends[0] = "Black"
	// 	// Loop
	// 	for i := 0; i < len(friends); i++ {
	// 		fmt.Println(friends[i])
	// 	}

	// Range
	for _, friend := range friends {
		fmt.Println(friend)
	}
	fmt.Println()
	for _, friend := range new_friends {
		fmt.Println(friend)
	}

}
