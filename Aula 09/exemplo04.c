/* Soma de Elementos em uma Matriz */
#include <stdio.h>
#define M 3
#define N 3
int main() {
	int i, j;
    int matriz[M][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma = 0;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz eh: %d\n", soma);
    return 0;
}

