#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contadorOcorrencias(char frase[], char palavra[]) {
    int i, j, count = 0;
    int tamFrase = strlen(frase);
    int tamPalavra = strlen(palavra);

    for (i = 0; i <= tamFrase - tamPalavra; i++) {
        for (j = 0; j < tamPalavra; j++) {
            if (frase[i + j] != palavra[j]) {
                break;
            }
        }
        if (j == tamPalavra) {
            count++;
        }
    }
    return count;
}

int main() {
    char frase[100], palavra[50];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int total = contadorOcorrencias(frase, palavra);
    printf("A palavra '%s' aparece %d vezes na frase.\n", palavra, total);

    return 0;
}
