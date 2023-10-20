/* Fatorial de um Número */
#include <stdio.h>

int main() {
    int i;
	int numero = 5; // Calcular o fatorial de 5
    int fatorial = 1;
    for (i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    printf("O fatorial de %d eh: %d\n", numero, fatorial);
    return 0;
}

