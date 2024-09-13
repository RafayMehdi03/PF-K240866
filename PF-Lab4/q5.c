#include <stdio.h>
int main() {
   float Amount,SavedAmount,DiscountedAmount ;
   printf("enter the actual cost of the item: ") ;
   scanf("%f",&Amount) ;
   if (Amount >= 500 && Amount <= 2000) {
       DiscountedAmount = Amount * 0.95 ;
       SavedAmount = Amount - DiscountedAmount ;}
   else if(Amount >= 2000 && Amount< 4000) {
       DiscountedAmount = Amount * 0.90 ;
       SavedAmount = Amount - DiscountedAmount ;}
   else if(Amount >= 4000 && Amount< 6000) {
       DiscountedAmount = Amount * 0.80 ;
       SavedAmount = Amount - DiscountedAmount ;}
   else if(Amount >= 6000) {
       DiscountedAmount = Amount * 0.65 ;
       SavedAmount = Amount - DiscountedAmount ;}
   else {
       printf("Inital Amount = %f \n Discounted Amount = %f \n Saved Amount = %f",Amount,DiscountedAmount,SavedAmount) ; }
   printf("Inital Amount = %.2f \n Amount Due = %.2f \n Saved Amount = %.2f",Amount,DiscountedAmount,SavedAmount) ;
   return 0 ;
   }
   