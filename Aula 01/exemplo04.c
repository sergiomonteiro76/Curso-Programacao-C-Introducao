#include <stdio.h>
int main(){
	float num1, num2;	
	int ehmaior;
	printf("Digite o num1: ");
	scanf("%f", &num1);
	printf("\n");
	printf("Digite o num2: ");
	scanf("%f", &num2);	
	ehmaior = (num1 > num2)? 1 : 2;
	printf("\nO elemento [%d] eh o maior numero.\n", ehmaior);
	return 0;
}


