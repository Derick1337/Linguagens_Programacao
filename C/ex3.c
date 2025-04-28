#include <stdio.h>
#include <stdlib.h>

int main(){
    int fahrenheit;
    printf("Insira a sua temperatura em fahrenheit: ");
    scanf("%d", &fahrenheit);
    int Celsius = ((fahrenheit -32) * 5)/9;
    printf("A temperatura em Celsus eh %d C \n", Celsius);
    return 0;
}