#include <stdio.h>
int main()
{
int i,num,hcf,sum=0,prevNum=1,x ;
printf("enter a number to check: ") ;
scanf("%d",&num) ;
for(i=1;i<num;i++) {
	
if (num%i==0) {
hcf = i ;
} }
if (hcf == 1){
   printf("Its a prime number\n") ;
   for (x=0;x<num;x++) {
   printf("%d ",sum) ;
   sum = x + prevNum ;
   prevNum = x ;
   } }
else
   printf("Its not a prime number") ;
}