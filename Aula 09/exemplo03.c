/* Pesquisa em um Vetor */
#include <stdio.h>

int main() {
	int i;
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valorProcurado = 30;
    int encontrado = 0;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == valorProcurado) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O valor %d foi encontrado no vetor.\n", valorProcurado);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valorProcurado);
    }

    return 0;
}

