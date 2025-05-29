package main

import "fmt"

func main() {
	var x uint = 1
	var n uint = 2

	for i := uint(0); i < n; i++ {
		x *= 2
	}

	fmt.Println("Resultado:", x)
}
