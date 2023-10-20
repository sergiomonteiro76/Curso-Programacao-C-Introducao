/* Função com Protótipo para Somar Dois Números*/
#include <stdio.h>

// Protótipo da função
int soma(int a, int b);

int main() {
    int resultado = soma(5, 3);
    printf("A soma eh: %d\n", resultado);
    return 0;
}

// Definição da função
int soma(int a, int b) {
    return a + b;
}

