package main

import "fmt"

func main() {
	var temp float64
	var opcao int

	fmt.Println("Escolha a escala de origem:")
	fmt.Println("1 - Celsius")
	fmt.Println("2 - Fahrenheit")
	fmt.Println("3 - Kelvin")
	fmt.Print("Opção: ")
	fmt.Scan(&opcao)

	fmt.Print("Digite a temperatura: ")
	fmt.Scan(&temp)

	switch opcao {
	case 1:
		f := temp*9.0/5.0 + 32.0
		k := temp + 273.15
		fmt.Printf("%.2f °C = %.2f °F = %.2f K\n", temp, f, k)

	case 2:
		c := (temp - 32.0) * 5.0 / 9.0
		k := c + 273.15
		fmt.Printf("%.2f °F = %.2f °C = %.2f K\n", temp, c, k)

	case 3:
		c := temp - 273.15
		f := c*9.0/5.0 + 32.0
		fmt.Printf("%.2f K = %.2f °C = %.2f °F\n", temp, c, f)

	default:
		fmt.Println("Opção inválida.")
	}
}
