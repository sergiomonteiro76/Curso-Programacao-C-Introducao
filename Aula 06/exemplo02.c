/*Tabuada de Multiplicação */
#include <stdio.h>
#define N 10

int main() {
	int i;
    int numero = 5; // Tabuada do 5
    for (i = 1; i <= N; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}

