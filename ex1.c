#include <stdio.h>
#include <stdlib.h>

int computeFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * computeFactorial(n - 1);
    }
}

void calculateFactorial() {
    int n;
    printf("Insira um Número: \n");
    scanf("%d", &n);
    printf("%d! = %d\n", n, computeFactorial(n));
    
}

int main() {
    calculateFactorial();
    return 0;
}
