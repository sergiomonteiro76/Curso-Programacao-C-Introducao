/* Soma de Elementos em um Vetor*/
#include <stdio.h>

int main() {
	int i;
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int soma = 0;

    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor eh: %d\n", soma);
    return 0;
}

