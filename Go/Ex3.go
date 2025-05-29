package main

import "fmt"

func main() {
	var n int
	fmt.Print("Digite um número inteiro positivo: ")
	fmt.Scan(&n)

	for i := 1; i < n; i += 2 {
		fmt.Printf("%d ", i)
	}
	fmt.Println()
}
