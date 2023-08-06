#include <stdio.h>
#include <ctype.h>

int main(){
   char letra;
   char letra_maiuscula;
   printf("Digite uma letra:");
   scanf("%c", &letra);
   letra_maiuscula = toupper(letra);
   printf("Letra: %c\n", letra_maiuscula);
   return 0;
}


