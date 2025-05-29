package main

import "fmt"

func ehPrimo(n uint) bool {
	if n <= 1 {
		return false
	}
	if n <= 3 {
		return true
	}
	if n%2 == 0 || n%3 == 0 {
		return false
	}
	for i := uint(5); i*i <= n; i += 6 {
		if n%i == 0 || n%(i+2) == 0 {
			return false
		}
	}
	return true
}

func main() {
	var n uint = 29
	if ehPrimo(n) {
		fmt.Printf("%d é primo.\n", n)
	} else {
		fmt.Printf("%d não é primo.\n", n)
	}
}
