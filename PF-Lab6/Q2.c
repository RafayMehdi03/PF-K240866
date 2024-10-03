#include <stdio.h>
int main()
{
int i,num,hcf ;
printf("enter a number to check: ") ;
scanf("%d",&num) ;
for(i=1;i<num;i++) {
if (num%i==0) {
hcf = i ;
} }
if (hcf == 1)
   printf("Its a prime number") ;
else
   printf("Its not a prime number") ;
}