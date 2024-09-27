#include <stdio.h>
int main()
{  
 char Weekday,Vacation ;
 printf("is it a weekday Y(Yes) or N(No): ") ;
 scanf(" %c",&Weekday) ;
 printf("are you on vacation Y(Yes) or N(No): ") ;
 scanf(" %c",&Vacation) ;
 if ((Weekday == 'Y') && (Vacation == 'Y'))
    printf("True") ;
 else {
 	if ((Weekday == 'N') && (Vacation == 'Y')) 
 	   printf("True") ;
 	else {
 	   if ((Weekday == 'N') && (Vacation == 'N'))
 	      printf("True") ;	
		else {
		  if ((Weekday == 'Y')&&(Vacation == 'N'))
		     printf("False") ;
	      else
		     printf("Invalid Input") ; }}}  
 }