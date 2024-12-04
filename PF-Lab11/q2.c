//i extracted each line and compared it to a certain string provided by the user. Count was incremeneted each time the comparision was true


#include <stdio.h>
#include <string.h>
int main(){
	FILE *file ;
	char str[20] ;
	char buffer[256] ;
	printf("Enter what word do you want to check first letter in caps: ") ;
	scanf("%s",str) ;
	int count = 0;
	file = fopen("data.txt","r") ;
	if(file==NULL){
		printf("Failed To Open File") ;
		return 1 ;
	}
	while(fgets(buffer,sizeof(buffer),file)){
		size_t len = strlen(buffer) ;
		if(len > 0 && buffer[len-1]=='\n'){
			buffer[len-1] = '\0' ;
		}
		if(strcmp(str,buffer)==0){
			count ++ ;
		}
	}
	printf("%s occurs %d times",str,count) ;
	fclose(file) ;
}