/* Soma dos N�meros Pares at� 50 */
#include <stdio.h>
#define N 50

int main() {
    int soma = 0;
    int i = 2;
    while (i <= N) {
        soma += i;
        i += 2;
    }
    printf("A soma dos n�meros pares ateh 50 eh: %d\n", soma);
    return 0;
}

