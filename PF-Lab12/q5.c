#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   int N ;
   char str[20] ;
   printf("Enter N: ") ;
   scanf("%d",&N) ;
   getchar();
   printf("Enter your full name: ");
   fgets(str,sizeof(str),stdin) ;
   char *arr = (char *)malloc(N*sizeof(char)) ;
   if(arr==NULL){
   	printf("Allocation Failed") ;
   	return 1;
   }
   strcpy(arr,str) ;
   printf("Dynamic Array = %s",arr) ;

   char ID[7];
   printf("Enter Student ID: ");
   scanf("%s",ID) ;
   arr = (char *)realloc(arr,(N+8)*sizeof(char));
   strcat(ID," ");
   strcat(ID,arr);
   strcpy(arr,ID) ;
   printf("Dynamic Array = %s",arr) ;
   getchar();
   free(arr);
}