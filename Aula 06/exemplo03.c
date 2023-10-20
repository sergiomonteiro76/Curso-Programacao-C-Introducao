/* Soma dos Números Pares até 50 */
#include <stdio.h>
#define N 50
int main() {
	int i;
    int soma = 0;
    for (i = 2; i <= N; i += 2) {
        soma += i;
    }
    printf("A soma dos números pares ateh %i eh: %d\n",N, soma);
    return 0;
}

