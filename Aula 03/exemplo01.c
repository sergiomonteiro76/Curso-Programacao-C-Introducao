/*Conversao de temperatura de Celsius para Fahrenheit*/
#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("A temperatura em Fahrenheit eh: %.2f\n", fahrenheit);
    return 0;
}

