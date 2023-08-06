/*Codigo para calcular a velocidade media de um carro*/
#include <stdio.h>
int main() {
    double distancia, tempo, velocidade;
    printf("\nDigite a distancia percorrida (em km): ");
    scanf("%lf", &distancia);
    printf("\nDigite o tempo de viagem (em horas): ");
    scanf("%lf", &tempo);
    velocidade = distancia / tempo;
    printf("\nA velocidade media do carro eh: %0.2lf km/h\n", velocidade);
    return 0;
}

