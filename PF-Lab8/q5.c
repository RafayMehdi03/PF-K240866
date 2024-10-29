#include <stdio.h>
int main(){
    int x,y,rows,i ;
    printf("enter the number of rows: ") ;
    scanf("%d",&rows) ;
    for(i=0;i<rows+1;i++){
       for(x=0;x<rows-i;x++){
	   printf(" ") ;
       }
       for(y=0;y<i+1;y++){
	   printf("* ") ;
       }
       printf("\n") ;
    }
    for(i=0;i<rows;i++){
       for(x=0;x<i+1;x++){
	   printf(" ") ;
       }
       for(y=0;y<rows-i;y++){
           printf("* ") ;
       }
       printf("\n") ;
    }
}

