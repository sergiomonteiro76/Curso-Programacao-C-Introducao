/*Calculo do volume de uma esfera*/
#include <stdio.h>
#include <math.h>
int main() {
    float raio, volume;
    const float PI = 3.14159;
    printf("\nDigite o raio da esfera: ");
    scanf("%f", &raio);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);
    printf("\nO volume da esfera eh: %.2f\n", volume);
    return 0;
}

