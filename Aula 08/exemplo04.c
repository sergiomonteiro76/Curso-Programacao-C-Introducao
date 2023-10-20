/* Função com Protótipo para Calcular Média de Notas */
#include <stdio.h>

// Protótipo da função
float calculaMedia(float nota1, float nota2, float nota3);

int main() {
    float nota1 = 8.5, nota2 = 7.2, nota3 = 9.0;
    float media = calculaMedia(nota1, nota2, nota3);
    printf("A media das notas eh: %.2f\n", media);
    return 0;
}

// Definição da função
float calculaMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

