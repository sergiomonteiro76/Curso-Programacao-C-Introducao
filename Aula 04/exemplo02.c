/*Verificar se um n�mero � par ou �mpar*/
#include <stdio.h>

int main() {
    int num;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\nO numero eh par.");
    } else {
        printf("\nO numero eh impar.");
    }

    return 0;
}

