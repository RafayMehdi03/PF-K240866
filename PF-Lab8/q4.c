#include <stdio.h>
int main(){
	int i,j,k,sum=0 ;
	int arr1[3][3],arr2[3][3],resultant[3][3] ;
	printf("For Array A: \n") ;
	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    	    printf("Enter element on row %d column %d: ",i+1,j+1) ;
    	    scanf("%d",&arr1[i][j]) ;
	    }
    }
    printf("For Array B: \n") ;
	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    	    printf("Enter element on row %d column %d: ",i+1,j+1) ;
    	    scanf("%d",&arr2[i][j]) ;
	    }
    }
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		sum = 0 ;
    		for(k=0;k<3;k++){
    			sum+=(arr1[i][k] * arr2[k][j]) ;
			}
			resultant[i][j] = sum ;
		}
	}
	printf("After Multiplication: \n") ;
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("%d ",resultant[i][j]) ;
        }
        printf("\n") ;
    }
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		resultant[i][j] -= arr1[i][j] ;
	    }
    }
    printf("After Subtraction: \n") ;
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("%d ",resultant[i][j]) ;
        }
        printf("\n") ;
    }
}