//      A Program to Print the Pattern of Equilateral Triangle


#include <stdio.h>

int main() {
   int n,i,j;

   n = 5;   // number of rows.

   for(i = 1; i <= n; i++) {
      for(j = 1; j <= n-i; j++)
         printf(" ");

      for(j = 1; j <= i; j++)
         printf("* ");

      printf("\n");
   }
   return 1;
}
