#include <stdio.h>
int main() {
int num ;
printf("Enter A Number: ") ;
scanf("%d",&num) ;
if (num > 0 && num % 2 == 0 && num % 10 == 0) 
  printf("Number accepted") ;
else
  printf("Number discarded") ; }