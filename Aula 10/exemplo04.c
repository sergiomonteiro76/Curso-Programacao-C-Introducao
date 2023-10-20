/* Comando Condicional*/
#include <stdio.h>

int main() {
    int numero = 10;
    int *ptr = &numero;

    if (*ptr > 5) {
        printf("O valor apontado por ptr eh maior do que 5.\n");
    } else {
        printf("O valor apontado por ptr nao eh maior do que 5.\n");
    }

    return 0;
}

