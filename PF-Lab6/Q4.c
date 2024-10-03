#include <stdio.h>
int main()
{
	int num,sum=0,digit,Inum ;
	printf("enter number: ") ;
	scanf("%d",&Inum) ;
	num = Inum ;
	do {
		digit = num % 10 ;
		sum = sum + (digit*digit*digit) ;
		num = num / 10 ;
	}
	while(num!=0) ;
	if(sum==Inum) 
	  printf("it is an armstrong") ;
	else
	  printf("is not an armstrong") ;
}