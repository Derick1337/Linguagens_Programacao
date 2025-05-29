
package main

import (
	"fmt"
	"strings"
)

func main() {
	frase := "ANA E MARIANA GOSTAM DE BANANA"
	palavra := "ANA"

	frase = strings.ToUpper(frase)
	palavra = strings.ToUpper(palavra)

	ocorrencias := 0
	for i := 0; i <= len(frase)-len(palavra); i++ {
		if frase[i:i+len(palavra)] == palavra {
			ocorrencias++
		}
	}

	fmt.Printf("A palavra %s ocorre %d vezes na frase.\n", palavra, ocorrencias)
}
