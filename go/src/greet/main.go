package main

import (
	"fmt"
	"greet/greeting"
	"greet/greeting/tamil"
	"greet/greeting/telugu"
)

func main() {
	fmt.Println("Greetings!!!")
	greeting.Hi()
	greeting.Bye()
	telugu.Hi()
	telugu.Bye()
	tamil.Hi()
	tamil.Bye()
}
