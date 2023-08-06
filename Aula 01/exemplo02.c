#include <stdio.h>

int main(){
	float x, funcao;
	printf("\nCalcular a funcao: f(x)= 3x^2+ 2x + 5");
	printf("\nDigite o valor de x:");
	scanf("%f", &x);
	funcao = 3*x*x+2*x+5;
	printf("\nf(%f)=%f \n", x,funcao);
	printf("\nf(%0.2f)=%0.2f \n", x,funcao);
	return 0;
}


