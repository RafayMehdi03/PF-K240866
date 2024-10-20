#include <stdio.h>

int main() {
    int arr[30] ;
    int count,i,x=0,y=1 ;
    printf("enter the size of the array: ");
    scanf("%d",&count) ;
    for(i=1;i<count+1;i++){
        printf("Element %d = ",i);
        scanf("%d",&arr[i-1]);
    }
    while (1){
    	if(arr[x]==-9999)
    	   x++ ;
    	else{
        if(x>=count)
          break;
        else if(arr[x]==arr[x+y]){
          arr[x+y] = -9999; 
          printf("Number %d occurs more than once\n",arr[x]);
          x++ ;}
        if((x+y)<(count-1))
          y++ ;
        else{
          x++ ;
          y=1 ;}
    }}
}