#include <stdio.h>
int main() {
   int rows, num = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 0; space < rows-i;space++)
         printf(" ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            num = 1;
         else
            num = num * (i - j + 1) / j;
         printf("%d ", num);
      }
      printf("\n");
   }
}