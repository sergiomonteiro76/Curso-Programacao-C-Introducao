/* Ordenação de um Vetor */
#include <stdio.h>

int main() {
	int i;
	int j;
    int vetor[] = {5, 3, 1, 4, 2};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    // Bubble Sort para ordenar o vetor
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

