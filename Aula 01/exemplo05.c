#include <stdio.h>
#include <math.h>
int main(){
	float b, c, hipotenusa;
	printf("\nCalcular a hiponetusa de um triangulo retangulo");
	printf("\nDigite o valor do lado b:");
	scanf("%f", &b);
    printf("\nDigite o valor do lado c:");
	scanf("%f", &c);
	hipotenusa = sqrt(pow(b,2)+pow(c,2));
	printf("\nhipotenusa=%0.2f \n", hipotenusa);	
	return 0;
}


