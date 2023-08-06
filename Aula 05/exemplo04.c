/*Verificar se um ponto (x, y) estah localizado em um dos quadrantes do plano cartesiano */
#include <stdio.h>

int main() {
    int x, y;

    printf("Digite as coordenadas x e y do ponto (separadas por espaco): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("O ponto estah no primeiro quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto estah no segundo quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto estah no terceiro quadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("O ponto estah no quarto quadrante.\n");
    } else {
        printf("O ponto estah na origem.\n");
    }

    return 0;
}

