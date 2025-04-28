#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Insira um Numero: \n");
    scanf("%d", &n);

    if (primo(n))
        printf("%d é Primo!\n", n);
    else
        printf("%d não é primo.\n", n);

    return 0;
}
