/* Função com Protótipo para Verificar Par ou Ímpar */
#include <stdio.h>

// Protótipo da função
void verificaParImpar(int n);

int main() {
    int numero = 7;
    verificaParImpar(numero);
    return 0;
}

// Definição da função
void verificaParImpar(int n) {
    if (n % 2 == 0) {
        printf("%d eh par.\n", n);
    } else {
        printf("%d eh impar.\n", n);
    }
}

