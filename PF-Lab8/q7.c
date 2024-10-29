#include <stdio.h>
int main(){
	char arr[50][10] ;
	int height,i,colSpace=0,x,y,j ;
	printf("Enter The Height Of Each Figure: ");
	scanf("%d",&height) ;
	for(i=0;i<height;i++){
	    colSpace = 0 ;
		for(x=0;x<height-i-1;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<2*i;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<((2*(height-i-1))+1);x++){
		    arr[i][colSpace] = ' ' ;
		    colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<2*i;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<(2*(height-i-1)+1);x++){
		    arr[i][colSpace] = ' ' ;
		    colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<2*i;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<height-i-1;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
	}
    for(i=0;i<height;i++){
        for(j=0;j<=colSpace-1;j++)
	  	  printf("%c",arr[i][j]) ;
	  	printf("\n") ;
    }
}