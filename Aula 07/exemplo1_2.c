/* Contagem de 1 a 10 */
#include <stdio.h>
#define N 10
int main() {
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= N);
    return 0;
}

