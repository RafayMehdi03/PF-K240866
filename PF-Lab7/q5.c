#include <stdio.h>
int main(){
    int numbers[10] ;
    int i,x,frequency=1 ;
    for(i=0;i<10;i++){
	printf("Enter an integer(except 0)= ",i+1) ;
	scanf("%d",&numbers[i]) ;
    }
    for(i=0;i<10;i++){
	if (numbers[i] == 0)
	    i++;
	else{
            for(x=i+1;x<10;x++){
		if(numbers[i]==numbers[x]){
		   frequency ++;
		   numbers[x] = 0;
	           }}
		printf("Number %d occurs %d times\n",numbers[i],frequency) ;
		frequency = 1;
        }
    }
}