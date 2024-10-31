#include <stdio.h>
int calculate(float num1,float num2,char op);
int main(){
    float result , a,b ;
	char c ;
	printf("Enter Number 1: ") ;
	scanf("%f",&a) ;
	printf("Enter Number 2: ") ;
	scanf("%f",&b) ;
	printf("Enter Operator(+,-,*,/): ") ;
	scanf(" %c",&c) ;
	result = calculate(a,b,c) ;
}
int calculate(float num1,float num2,char op){
	float result ;
	switch(op){
		case '+' :
			result = num1 + num2 ;
			break ;
		case '-' :
			result = num1 - num2 ;
			break ;
		case '*' :
		    result = num1 * num2 ;
			break ;
		case '/' :	
			result = num1 / num2 ;
			break ;
		default :	
			printf("Wrong Operator") ;
	}
	printf("%g %c %g = %g",num1,op,num2,result) ;
}