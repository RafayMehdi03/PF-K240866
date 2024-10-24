#include <stdio.h>
int main(){
	int array[2][50][2] ;
	int i,j,k ;
	int length,n ;
	int start,start1,start2 ;
	int value1,value2 ;
	printf("Enter the start value for first array: ") ;
	scanf("%d",&start) ;
	printf("enter N: ") ;
	scanf("%d",&n) ;
	if(start%2==0){
	   start1=start ;
	   start2=start-1 ;
    }
	else{
	   start2=start ;
	   start1=start-1 ;
    }
    value1 = start1;
    value2 = start2;
    for(j=0;j<n;j++){
    	for(k=0;k<2;k++){
    		array[0][j][k] = value1 ;
    		value1 -= 2 ;
		}
    }
	for(j=0;j<n;j++){
    	for(k=0;k<2;k++){
    		array[1][j][k] = value2 ;
    		value2 -= 2 ;
		}
	}
	printf("{") ;
	for(i=0;i<2;i++){
		printf("{") ;
		for(j=0;j<n;j++){
			printf("{") ;
			for(k=0;k<2;k++){
			    if(k==1)
				    printf("%d",array[i][j][k]) ;
				else
				    printf("%d,",array[i][j][k]) ;
			} 
			if(j==n-1)
				printf("}") ;
			else
				printf("},") ;
		}
		if(k==1)
			printf("}") ;
		else
			printf("},") ;
	}
	if(i==1)
			printf("}") ;
		else
			printf("},") ;
}