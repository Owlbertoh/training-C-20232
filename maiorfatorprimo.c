#include <stdio.h>

int main() {
   char b = 's';
   long long int a, primo = 2;
   while (1)
   {
   printf("Digite um valor inteiro e obtenha o maior fator primo: ");
   scanf("%lld", &a);
   while (a != 1) {
      if (a % primo == 0) {
         a /= primo;
      } else {
         if (primo > 2) {
            primo += 2;  // Aumenta apenas para números ímpares maiores que 2
         } else {
            primo++;  // Aumenta para 3 (primeiro número primo)
         }
      }
   }
   printf("O maior fator primo e %lld \n", primo);
   
   printf("Quer continuar ? [s ou n]: ");
   scanf(" %c", &b);
   if(b == 'n'){
      break;
   }
   }
       return 0;
}