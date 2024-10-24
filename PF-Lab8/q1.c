#include <stdio.h>
int main(){
	int start,end,y,i,hcf ;
	printf("enter start range: ") ;
	scanf("%d",&start) ;
	printf("enter end range: ") ;
	scanf("%d",&end) ;
	for(i=start;i<end;i++){
		for(y=1;y<i;y++){
			if(i%y==0){
				hcf=y;
			}
		}
		if(hcf==1){
			printf("%d ",i);
		}
	}
	
}