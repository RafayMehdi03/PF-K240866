#include <stdio.h>
int main(){
	int array[3][3] ;
	int small[3] ;
	int index=0,smallest=1000,n,i,j ;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter element on %d row %d column: ",i+1,j+1) ;
			scanf("%d",&array[i][j]) ;
		}
	}
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
		    if(array[i][j]<smallest){
		    	smallest=array[i][j] ;
		    	n = j ;
			}
	    }
	    small[index] = n ;
		index ++ ;
		smallest  = 1000 ;
    }
    if(array[0][small[0]]>=array[1][small[0]]&&array[0][small[0]]>=array[2][small[0]])
        printf("Saddle Point is at row %d column %d",1,small[0]+1) ;
    else if(array[1][small[1]]>=array[0][small[1]]&&array[1][small[1]]>=array[2][small[1]])
        printf("Saddle Point is at row %d column %d",2,small[1]+1) ;
    else if(array[2][small[2]]>=array[0][small[2]]&&array[2][small[2]]>=array[1][small[2]])
        printf("Saddle Point is at row %d column %d",3,small[2]+1) ;
    else
        printf("no saddle points") ;
}
