/*Verificar se um ano digitado é um ano de nascimento, se sim, calcular a idade atual */
#include <stdio.h>
#include <time.h>

int main() {
    int ano_nascimento, ano_atual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ano_atual = tm.tm_year + 1900;

    idade = ano_atual - ano_nascimento;

    printf("A idade atual eh: %d anos\n", idade);

    return 0;
}

