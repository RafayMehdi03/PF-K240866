#include <stdio.h>
#include <string.h>
struct Address{
	char city[20] ;
	int zip_code ;
};
struct Employee{
	int id ;
	int salary ;
	struct Address adr ;
};
int main(){
	int i;
	FILE *fptr ;
    fptr = fopen("employees.txt","w") ;
    if(fptr==NULL){
    	printf("Failed To Open File") ;
    	return 1 ;
	}
	int n ;
	struct Employee e ;
	printf("For How Many Employees Do You Want To Enter Data: ") ;
	scanf("%d",&n) ;
	for(int i=0;i<n;i++){
		printf("Enter Employee ID for Employee %d: ",i+1) ;
		scanf("%d",&e.id) ;
		printf("Enter Employee Salary for Employee %d: ",i+1) ;
		scanf("%d",&e.salary) ;
		printf("Enter City Where Employee %d lives: ",i+1) ;
		scanf("%s",e.adr.city) ;
		printf("Enter Employee %d's Zip Code: ",i+1) ;
		scanf("%d",&e.adr.zip_code) ;
		fprintf(fptr,"ID = %d\nSalary = %d\nCity = %s\nZip Code = %d",e.id,e.salary,e.adr.city,e.adr.zip_code) ;
	}
	for(i=0;i<n;i++){
		char str[50] ;
		fgets(str,sizeof(str),fptr) ;
		printf("Record %d: %s",i,str) ;
	}
}