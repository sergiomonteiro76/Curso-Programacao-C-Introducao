/*Calculo do preço final de um produto com desconto*/
#include <stdio.h>
int main() {
    float preco, desconto, preco_final;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o valor do desconto (em porcentagem): ");
    scanf("%f", &desconto);
    preco_final = preco * (1 - (desconto / 100));
    printf("O preco final do produto com desconto eh: %.2f\n", preco_final);
    return 0;
}

