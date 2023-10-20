/* Exibição de Caracteres em uma String */
#include <stdio.h>

int main() {
    char palavra[] = "Exemplo";
    int tamanho = sizeof(palavra) - 1; // Desconsidera o caractere nulo '\0'
    int i = 0;
    while (i < tamanho) {
        printf("%c ", palavra[i]);
        i++;
    }
    return 0;
}

