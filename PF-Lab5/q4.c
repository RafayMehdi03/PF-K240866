#include <stdio.h>
int main()
{
int pH ;
printf("enter pH: ") ;
scanf("%d",&pH) ;
if (pH > 7) {
   if (pH < 12)
      printf("Alkaline") ;
   else 
      printf("Very Alkaline") ; }
else {
   if (pH == 7) 
     printf("Neutral") ;
   else {
     if (pH < 2) 
        printf(" Very Acidic") ;
     else 
         printf("Acidic") ; } }
}