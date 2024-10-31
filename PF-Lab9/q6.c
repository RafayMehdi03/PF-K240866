#include <stdio.h>
#include <string.h>
void reverse(char str[20]) ;
int main(){
	int count,i ;
	char str[20] ;
	printf("How many strings do you want to reverse: ") ;
	scanf("%d",&count) ;
	for(i=0;i<count;i++){
		printf("Enter String %d: ",i+1) ;
		scanf("%s",str) ;
		reverse(str) ;
		printf("%s\n",str) ;
	}
}
void reverse(char str[20]){
	int x ;
	strrev(str) ;
}