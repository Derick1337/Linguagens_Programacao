#include <stdio.h>
#include <string.h>

int contar_ocorrencias(char frase[], char palavra[]) {
    int count = 0;
    int len_palavra = strlen(palavra);
    int len_frase = strlen(frase);

    for (int i = 0; i <= len_frase - len_palavra; i++) {
        int j;
        for (j = 0; j < len_palavra; j++) {
            if (frase[i + j] != palavra[j]) {
                break;
            }
        }
        if (j == len_palavra) {
            count++;
        }
    }

    return count;
}

int main() {
    char frase[256];
    char palavra[100];

    printf("Digite a frase:\n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; 

    printf("Digite a palavra que deseja buscar:\n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; 

    int total = contar_ocorrencias(frase, palavra);
    printf("A palavra \"%s\" ocorre %d vez(es) na frase.\n", palavra, total);

    return 0;
}
