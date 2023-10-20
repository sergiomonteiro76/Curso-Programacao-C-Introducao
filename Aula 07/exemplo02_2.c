/* Tabuada de Multiplicação */
#include <stdio.h>
#define N 10
int main() {
    int numero = 5; // Tabuada do 5
    int i = 1;
    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= N);
    return 0;
}

