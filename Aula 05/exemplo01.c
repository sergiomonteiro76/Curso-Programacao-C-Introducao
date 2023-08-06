/*Verificar se um caractere digitado é uma vogal ou uma consoante */
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("O caractere eh uma vogal.\n");
    } else {
        printf("O caractere eh uma consoante.\n");
    }

    return 0;
}

