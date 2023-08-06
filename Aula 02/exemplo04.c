#include <stdio.h>

int main() {
    int a1, r, n, an, soma;
    printf("\nDigite o primeiro termo (a1): ");
    scanf("%i", &a1);
    printf("\nDigite a razao (r): ");
    scanf("%i", &r);
    printf("\nDigite o numero de termos (n): ");
    scanf("%i", &n);
    an = a1 + (n - 1) * r;
    soma = (n * (a1 + an)) / 2;
    printf("A soma da progressao aritmetica eh: %i\n", soma);

    return 0;
}

