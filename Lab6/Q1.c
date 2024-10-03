// a while loop can be used because number of iterations is unknown

#include <stdio.h>
int main()
{
int Num,Sum=0 ;
do {
printf("enter a number to add: ") ;
scanf("%d",&Num) ;
Sum += Num ; }
while(Num != 0)
printf("Sum = %d",Sum) ;
}