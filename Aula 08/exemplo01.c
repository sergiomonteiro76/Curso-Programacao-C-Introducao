/* Fun��o com Prot�tipo para Somar Dois N�meros*/
#include <stdio.h>

// Prot�tipo da fun��o
int soma(int a, int b);

int main() {
    int resultado = soma(5, 3);
    printf("A soma eh: %d\n", resultado);
    return 0;
}

// Defini��o da fun��o
int soma(int a, int b) {
    return a + b;
}

