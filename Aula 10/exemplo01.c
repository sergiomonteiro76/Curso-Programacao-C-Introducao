/* Usando Ponteiros para Trocar Valores*/
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *ptrA = &a, *ptrB = &b;

    // Troca os valores de a e b usando ponteiros
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}

