/*Verificar se um número é múltiplo de 5 ou 7*/
#include <stdio.h>

int main() {
    int num;

    printf("\nDigite um numero inteiro: \n");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("O numero eh multiplo de 5.\n");
    } 
	else{
	    if (num % 7 == 0) {
	        printf("O numero eh multiplo de 7.\n");
	    }else {
			printf("O numero nem eh multiplo de 5 e nem de 7.\n");
		}

	}

    return 0;
}

