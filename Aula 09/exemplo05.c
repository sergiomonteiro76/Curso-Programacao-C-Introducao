/* Multiplicação de Duas Matrizes */
#include <stdio.h>
#define M 2
#define N 2
#define Q 2
int main() {
	int i, j, k;
    int matriz1[M][N] = {{1, 2}, {3, 4}};
    int matriz2[N][Q] = {{5, 6}, {7, 8}};
    int resultado[M][Q];
    
    for (i = 0; i < M; i++) {
        for (j = 0; j < Q; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < N; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nResultado da multiplicacao de matrizes:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < Q; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

