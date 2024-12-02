#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2 ;
	printf("Enter Size Of Array: ") ;
	scanf("%d",&n1) ;
	int *arr = (int *)malloc(n1*sizeof(int)) ;
	for(int i=0;i<n1;i++){
		printf("Enter element %d: ",i+1) ;
		scanf("%d",&arr[i]) ;
	}
	printf("Enter New Size Of Array: ") ;
	scanf("%d",&n2) ;
	if(n2>n1){
		arr = (int *)realloc(arr,n2*sizeof(int)) ;
		for(int i=n1;i<n2;i++){
			printf("Enter element %d: ",i+1) ;
			scanf("%d",&arr[i]) ;
		}
	}
	int max = 0 ;
	for(int i=0;(n2>n1)?i<n2:i<n1;i++){
		if(arr[i]>max){
			max = arr[i] ;
		}
	}
	printf("Largest Number Is %d",max) ;
	getchar();
	getchar() ;
	free(arr) ;
}