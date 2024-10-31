#include <stdio.h>
int swap(int a,int b) ;
int main(){
	int a,b ;
	printf("Enter Number 1: ");
	scanf("%d",&a) ;
	printf("Enter Number 2: ");
	scanf("%d",&b) ;
	swap(a,b) ;
}
int swap(int a,int b){
	int temp ;
	temp = a ;
	a = b ;
	b = temp ;
	printf("Number 1 = %d\nNumber 2 = %d",a,b) ;
}