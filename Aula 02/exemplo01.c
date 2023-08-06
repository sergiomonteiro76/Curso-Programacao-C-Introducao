#include <stdio.h>
#include <ctype.h>

int main(){
   float media;
   float nota1, nota2;
   printf("\nDigite a primeira nota:");
   scanf("%f", &nota1);
   printf("\nDigite a segunda nota:");
   scanf("%f", &nota2);
   media=(nota1+nota2)/2;
   printf("\nMedia= %0.2f\n", media);
   return 0;
}


