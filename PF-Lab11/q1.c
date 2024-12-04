#include <stdio.h>
#include <string.h>
int main(){
	FILE *f1 ;
	FILE *f2 ;
	char buffer[256] ;
	f1 = fopen("data.txt","r") ;
	f2 = fopen("scores.txt","w") ;
	if(f1==NULL || f2==NULL){
		printf("File not opened");
		return 1;
	}
	while(fgets(buffer,sizeof(buffer),f1)){
		fputs(buffer,f2) ;
	}
	fclose(f1) ;
	fclose(f2) ;
}