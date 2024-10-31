#include <stdio.h>
#include <string.h>
void sort(char str[20][20],int count) ;
int main(){
	char str[20][20] ;
	int i,count;
	printf("How many strings do you want to enter: ") ;
	scanf("%d",&count) ;
	for(i=0;i<count;i++){
		printf("Enter string %d: ",i+1);
		scanf("%s",str[i]) ;
	}
	sort(str,count) ;
	printf("{") ;
	for(i=0;i<count;i++){
		printf("%s,",str[i]) ;
	}
	printf("}") ;
	
}
void sort(char str[20][20],int count){
	int i,x,result ;
	char temp[20] ;
	for(i=0;i<count-1;i++){
		for(x=0;x<count-i-1;x++){
			result = strcmp(str[x],str[x+1]) ;
			if(result==1){
				strcpy(temp,str[x]) ;
				strcpy(str[x],str[x+1]) ;
				strcpy(str[x+1],temp) ;
			}
		}
	}
}