#include <stdio.h>
int main() 
{
int number ;
printf("enter a number: ") ;
scanf("%d",&number) ;
if (number % 3 == 0) {
printf("This number is a multiple of 3") ; }
else {
printf("This number is not a multiple of 3") ; }
} 