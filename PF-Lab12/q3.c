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
   strcpy(arr,str) ;
   printf("Dynamic Array = %s",arr) ;
   free(arr) ;
}