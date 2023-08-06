#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    double raio, area;
    printf("\nDigite o valor do raio do circulo: ");
    scanf("%lf", &raio);
    area = PI * pow(raio,2);
    printf("\nA area do circulo eh: %0.2lf", area);
    return 0;
}

