/*Verificar se um n�mero digitado est� dentro de um intervalo espec�fico*/
#include <stdio.h>

int main() {
    int num;

    printf("\nDigite um numero inteiro: \n");
    scanf("%d", &num);

    if (num >= 10 && num <= 50) {
        printf("O numero estah dentro do intervalo de 10 a 50.\n");
    } else {
        printf("O numero estah fora do intervalo de 10 a 50.\n");
    }

    return 0;
}

