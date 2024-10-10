#include <stdio.h>
int main(){
	int temp,i,y ;
	int arr[6]={0,0,0,0,0,0} ;
	int check[6] = {0,0,0,0,0,0} ;
	for(i=0;i<6;i++){
		scanf("%d",&arr[i]) ;
	}
	for(i=0;i<6;i++){
	    y=i+1 ;
	    if (y>5)
	       y=0 ;
	    check[y] = arr[i] ;
	}
	for(i=0;i<6;i++){
		printf("%d",check[i]) ;
	}
}