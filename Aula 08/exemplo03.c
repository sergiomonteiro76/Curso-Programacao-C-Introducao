/* Fun��o com Prot�tipo para Verificar Par ou �mpar */
#include <stdio.h>

// Prot�tipo da fun��o
void verificaParImpar(int n);

int main() {
    int numero = 7;
    verificaParImpar(numero);
    return 0;
}

// Defini��o da fun��o
void verificaParImpar(int n) {
    if (n % 2 == 0) {
        printf("%d eh par.\n", n);
    } else {
        printf("%d eh impar.\n", n);
    }
}

