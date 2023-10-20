/* Exemplo com passagem por referência */
#include <stdio.h>
#include <stdlib.h>
// Protótipos das funções
void inserirDado(int *dado);
void exibirDado(int dado);
void modificarDado(int *dado);
void excluirDado(int *dado);

int main() {
    int opcao;
    int dado = 0; // Variável para armazenar o dado

    do {    	
        printf("Escolha uma opcao:\n");
        printf("1. Inserir dado\n");
        printf("2. Exibir dado\n");
        printf("3. Modificar dado\n");
        printf("4. Excluir dado\n");
        printf("5. Sair\n");
        printf("Digite o numero da opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirDado(&dado);
                break;
            case 2:
                exibirDado(dado);
                break;
            case 3:
                modificarDado(&dado);
                break;
            case 4:
                excluirDado(&dado);
                break;
            case 5:
                printf("Saindo do programa. Ateh mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }        
        printf("\nPressione qualquer tecla para continuar.\n");
        getch(); // Aguarda que o usuário pressione uma tecla        
        system("cls");
    } while (opcao != 5);

    return 0;
}

void inserirDado(int *dado) {
    printf("Digite o valor a ser inserido: ");
    scanf("%d", dado);
    printf("Dado inserido com sucesso!\n");
}

void exibirDado(int dado) {
    printf("Dado armazenado: %d\n", dado);
}

void modificarDado(int *dado) {
    printf("Digite o novo valor: ");
    scanf("%d", dado);
    printf("Dado modificado com sucesso!\n");
}

void excluirDado(int *dado) {
    *dado = 0;
    printf("Dado excluido com sucesso!\n");
}

