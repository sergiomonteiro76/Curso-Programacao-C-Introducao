/* Soma dos Números Pares até 50 */
#include <stdio.h>
#define N 50
int main() {
    int soma = 0;
    int i = 2;
    do {
        soma += i;
        i += 2;
    } while (i <= N);
    printf("A soma dos numeros pares ateh %i eh: %d\n", N, soma);
    return 0;
}

