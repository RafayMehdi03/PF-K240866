#include <stdio.h>
int main()
{
 char coffeeType,Double ;
 float Time = 0;
 printf("enter the type of coffee\n B-Black Coffee or W-White Coffee: ") ;
 scanf(" %c",&coffeeType) ;
 printf("Is the cup size double\n Y-Yes or N-No: ") ;
 scanf(" %c",&Double) ;
 switch(coffeeType) {
 case 'W' :
    printf("Add Water\n") ;
    Time += 15 ;
    printf("Add Sugar\n") ;
    Time += 15 ;
    printf("Mix Well\n") ;
    Time += 20 ;
    printf("Add Coffee\n") ;
    Time += 2 ;
    printf("Add Milk\n") ;
    Time += 4 ;
    printf("Mix Well\n") ;
    Time += 20 ;
    if (Double == 'Y')
        Time = Time * 1.5 ;
    printf("Total Time Taken Is %.2f mins",Time) ;
    break ;
 case 'B' :
    printf("Add Water\n") ;
    Time += 20 ;
    printf("Add Sugar\n") ;
    Time += 20 ;
    printf("Mix Well\n") ;
    Time += 25 ;
    printf("Add Coffee\n") ;
    Time += 15 ;
    printf("Mix Well\n") ;
    Time += 25 ;
    if (Double == 'Y')
        Time = Time * 1.5 ;
    printf("Total Time Taken Is %g mins",Time) ;
    break ;
 default :
    printf("Invalid Coffee Type") ;}
}