/* Fun��o com Prot�tipo para Calcular M�dia de Notas */
#include <stdio.h>

// Prot�tipo da fun��o
float calculaMedia(float nota1, float nota2, float nota3);

int main() {
    float nota1 = 8.5, nota2 = 7.2, nota3 = 9.0;
    float media = calculaMedia(nota1, nota2, nota3);
    printf("A media das notas eh: %.2f\n", media);
    return 0;
}

// Defini��o da fun��o
float calculaMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

