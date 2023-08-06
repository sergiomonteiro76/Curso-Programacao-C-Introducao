#include <stdio.h>
#include <math.h>

int main() {
    double a1, r, n, soma;
    printf("\nDigite o primeiro termo (a): ");
    scanf("%lf", &a1);
    printf("\nDigite a razao (r): ");
    printf("\n***Observacao: a razao deve ser maior que 0.***\n");
    scanf("%lf", &r);
    printf("\nDigite o numero de termos (n): ");
    scanf("%lf", &n);
    soma = a1 * (1 - pow(r, n)) / (1 - r);
    printf("\nA soma da progressao geometrica eh: %0.2lf\n", soma);

    return 0;
}

