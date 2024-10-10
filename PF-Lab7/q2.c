#include <stdio.h>
int main(){
    int i,limit,numA=0,numE=0,numI=0,numO=0,numU=0 ;
	char text[50] ;
	printf("enter your text(do not include spaces if any): ") ;
	scanf(" %s",text) ;
	printf("How many characters does your string has: ") ;
	scanf("%d",&limit) ;
	for(i=0;i<limit;i++){
	    switch(text[i]){
	        case 'i':
	           numI ++ ;
	           break ;
	        case 'a':
	           numA ++ ;
	            break ;
	        case 'o':
	           numO ++ ;
	            break ;
	        case 'e':
	           numE ++ ;
	            break ;
	        case 'u':
	           numU ++ ;
	           break ;
	    }
	}
	printf("a=%d  e=%d  i=%d  o=%d  u=%d",numA,numE,numI,numO,numU) ;
}
