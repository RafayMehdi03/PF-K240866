#include <stdio.h>
int main()
{ 
 float Percentage,fatGrams,fatCalories,Calories ;
 printf("enter the total number of calories: ") ;
 scanf("%d",&Calories) ;
 printf("enter the total grams of fat: ") ;
 scanf("%d",&fatGrams) ;
 if ((fatGrams>=0) && (Calories>=0)) {
 	fatCalories = fatGrams * 9 ;
 	if (fatCalories <= Calories) {
 		Percentage = (fatCalories/Calories)*100 ;
 		printf("Fat percentage is %.2f",Percentage) ; }
	else
	    printf("Either fat grams or calories were written wrong.") ; }
 else
    printf("fat grams or calories can not be less than 0.") ;
}