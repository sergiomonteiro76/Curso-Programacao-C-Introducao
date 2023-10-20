/* Fun��o com Prot�tipo para Calcular Fatorial*/
#include <stdio.h>

// Prot�tipo da fun��o
int fatorial(int n);

int main() {
    int numero = 5;
    int resultado = fatorial(numero);
    printf("O fatorial de %d eh: %d\n", numero, resultado);
    return 0;
}

// Defini��o da fun��o
int fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

