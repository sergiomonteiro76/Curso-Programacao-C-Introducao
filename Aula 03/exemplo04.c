/*Calculo do salario liquido de um funcionario com base no salario bruto e descontos*/
#include <stdio.h>
int main() {
    float salario_bruto, desconto_inss, desconto_ir, salario_liquido;
    printf("\nDigite o salario bruto do funcionario: ");
    scanf("%f", &salario_bruto);
    printf("\nDigite o valor do desconto do INSS: ");
    scanf("%f", &desconto_inss);
    printf("\nDigite o valor do desconto do Imposto de Renda: ");
    scanf("%f", &desconto_ir);
    salario_liquido = salario_bruto - desconto_inss - desconto_ir;
    printf("\nO salario liquido do funcionario eh: %.2f\n", salario_liquido);
    return 0;
}

