/*  Loop com Ponteiros em um Array */
#include <stdio.h>

int main() {
	int i;
    int numeros[] = {1, 2, 3, 4, 5};
    int *ptr = numeros;

    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}

