/* Fatorial de um Número */
#include <stdio.h>

int main() {
    int numero = 5; // Calcular o fatorial de 5
    int fatorial = 1;
    int i = 1;
    while (i <= numero) {
        fatorial *= i;
        i++;
    }
    printf("O fatorial de %d eh: %d\n", numero, fatorial);
    return 0;
}

