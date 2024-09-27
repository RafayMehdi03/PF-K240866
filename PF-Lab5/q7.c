#include <stdio.h>
int main()
{
int Num ;
printf("Enter a number: ") ;
scanf("%d",&Num) ;
(Num % 10 == 0) ?
printf("Last Digit is zero") :
printf("Last Digit is non-zero") ;
}