#include <stdio.h> 
int main()
{
float GPA ;

printf("enter grade point average b/w 0.0 and 4.0: ") ;
scanf("%f",&GPA) ;
((GPA >= 0.0) && (GPA <=0.99)) ?
printf("Failed semester -- registration suspended") :
((GPA >= 1.0) && (GPA <= 2.99)) ?
printf("On probation for next semester") :
((GPA >= 2.0) && (GPA <= 2.99)) ?
printf("") :
((GPA >= 3.0)& (GPA <= 3.49)) ?
printf("Dean's list for semester") :
((GPA >= 3.5) && (GPA <= 4.0)) ?
printf("Highest honors for semester") :
printf("Invalid GPA") ;
}
