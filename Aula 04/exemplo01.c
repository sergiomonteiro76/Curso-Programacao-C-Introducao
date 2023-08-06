/*Verificar se um numero eh positivo, negativo ou zero*/
#include <stdio.h>

int main() {
    int num;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("\nO numero eh positivo.");
    } else if (num < 0) {
        printf("\nO numero eh negativo.");
    } else {
        printf("\nO numero eh zero.");
    }

    return 0;
}

