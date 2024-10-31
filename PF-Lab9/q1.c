#include <stdio.h>
#include <string.h>
int main(){
	char arr[20][20] ;
	char searchWord[10] ;
	int i,count,result;
	printf("How many strings do you want to enter: ") ;
	scanf("%d",&count) ;
	for(i=0;i<count;i++){
		printf("Enter String %d: ",i+1) ;
		scanf("%s",arr[i]) ;
	}
	printf("Enter the word to search: ") ;
	scanf("%s",searchWord) ;
	for(i=0;i<count;i++){
	    result=strcmp(arr[i],searchWord) ;
	    if(result==0){
		  printf("Found at index %d\n",i+1) ;
		  return 0;
	    }
	}
}