#include <stdio.h>
#include <string.h>
int main(){
	char arr1[20][20] ;
	char arr2[20][20] ;
	int i,count,x,result ;
	printf("how many strings do you want to enter: ");
	scanf("%d",&count) ;
	for(i=0;i<count;i++){
			printf("enter string %d: ",i+1) ;
			scanf("%s",arr1[i]) ;
    }
	for(i=0;i<count;i++){
	    for(x=0;x<strlen(arr1[i]);x++){
		    arr2[i][x]=arr1[i][strlen(arr1[i])-x-1] ;
	    }
	}
	for(i=0;i<count;i++){
		result = strcmp(arr1[i],arr2[i]) ;
		if(result==0)
		   printf("%s is a palindrome\n",arr1[i]) ;
		else 
		   printf("%s is not a palindrome\n",arr1[i]) ;
	}
}