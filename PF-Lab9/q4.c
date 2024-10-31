#include <stdio.h>
int isPrime(int a) ;
int main(){
	int i,a,count,result ;
	printf("Enter how many number you want to check: ");
	scanf("%d",&count) ;
	for(i=0;i<count;i++){
	    printf("Enter Number: ");
	    scanf("%d",&a) ;
	    result = isPrime(a) ;
	    if(result==0)
	      printf("%d is not a prime number \n",a) ;
	    else
	      printf("%d is a prime number \n",a) ;
    }
}
int isPrime(int a){
	int hcf,divisor=1 ;
	while(divisor<a){
		if(a%divisor==0)
		   hcf=divisor ;
		divisor ++ ;
	}
	if(hcf!=1)
	   return 0;
	else
	   return 1 ; 
}