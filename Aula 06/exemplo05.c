/* Exibição de Caracteres em uma String */
#include <stdio.h>

int main() {
	int i;
    char palavra[] = "Exemplo";
    int tamanho = sizeof(palavra) - 1; // Desconsidera o caractere nulo '\0'
    for (i = 0; i < tamanho; i++) {
        printf("%c ", palavra[i]);
    }
    return 0;
}

