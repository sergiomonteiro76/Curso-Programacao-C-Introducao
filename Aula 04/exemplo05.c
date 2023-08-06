/*Verificar se tr�s n�meros formam um tri�ngulo e, se sim, identificar o tipo de tri�ngulo */
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados do triangulo (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo equilatero.\n");
        } else if (a == b || b == c || a == c) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}



