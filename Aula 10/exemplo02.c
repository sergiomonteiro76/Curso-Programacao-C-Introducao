/* Usando Ponteiros em uma Fun��o */
#include <stdio.h>

void incrementa(int *valor) {
    (*valor)++;
}

int main() {
    int num = 5;
    incrementa(&num);
    printf("Numero incrementado: %d\n", num);
    return 0;
}

