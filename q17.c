#include <stdio.h>
int main() {
   int h, coef = 1, i, j,k;
   printf("Enter the height of pattern : ");
   scanf("%d", &h);
   for (i = 0; i < h; i++) {
      for (j = 1; j <= h - i; j++)
         printf("  ");
      for (k = 0; k <= i; k++) {
         if (k == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - k + 1) / k;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}
