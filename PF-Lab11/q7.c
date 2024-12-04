#include <stdio.h>
#include <string.h>
struct Company{
	char name[20] ;
	int year_established ;
	char departments[5][20] ;
};
int main(){
	struct Company c ;
	int i,n ;
	printf("Enter company's name: ") ;
	fgets(c.name,sizeof(c.name),stdin) ;
	size_t len = strlen(c.name) ;
	if(len>0 && c.name[len-1]=='\n'){
		c.name[len-1] = '\0' ;
	}
	printf("Enter the year in which it was established: ") ;
	scanf("%d",&c.year_established) ;
	printf("How many departments does it have: ") ;
	scanf("%d",&n) ;
	getchar() ;
	for(i=0;i<n;i++){
		printf("Enter Name Of Department %d: ",i+1) ;
		fgets(c.departments[i],sizeof(c.departments[i]),stdin) ;
		size_t len = strlen(c.departments[i]) ;
		if(len>0 && c.departments[i][len-1]=='\n'){
		      c.departments[i][len-1] = '\0' ;
	    }
	}
	printf("COMPANY DETAILS :\nName : %s\nYear established : %d\nIt has %d departments\n",c.name,c.year_established,n) ;
	for(i=0;i<n;i++){
		printf("%d) %s\n",i+1,c.departments[i]) ;
	} 
}