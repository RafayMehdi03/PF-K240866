#include <stdio.h>
#include <stdlib.h>
void sum(int *ptr,int n) ;
int main(){
	int n ;
	printf("Enter the size of array: ") ;
	scanf("%d",&n) ;
	int *arr = (int *)malloc(n*sizeof(int)) ;
	if(arr==NULL){
		printf("Allocation failed") ;
		return 1;
	}
	for(int i=0;i<n;i++){
		printf("Enter element %d: ",i+1) ;
		scanf("%d",&arr[i]);
	}
	sum(arr,n) ;
	free(arr) ;
}
void sum(int *ptr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum += ptr[i] ;
	}
	printf("The sum is %d",sum) ;
}