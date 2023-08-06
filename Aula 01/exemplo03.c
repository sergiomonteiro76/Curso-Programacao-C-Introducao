#include <stdio.h>
int main(){
	char nome[50];	
	char sobrenome[50];	
	int idade;
	printf("\nDigite o nome: ");
	scanf("%s", nome);
	printf("\nDigite o sobrenome: ");
	scanf("%s", sobrenome);
    printf("\nDigite a idade: ");
	scanf("%i", &idade);

	printf("\nOs dados do usuario sao:");
	printf("\nnome = %s", nome);
	printf("\nsobrenome = %s", sobrenome);
	printf("\nidade = %i", idade);
	return 0;
}
