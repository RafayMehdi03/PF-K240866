#include <stdio.h>
int main() {
    int ID, Units ;
    float IBill,Bill,Rate,Surcharge ;
    printf("enter your customer ID: ");
    scanf("%d",&ID);
    printf("enter your units consumed: ");
    scanf("%d",&Units);
    if (Units >= 0 && Units < 200) {
      IBill = Units * 16.2 ;
      Rate = 16.2 ; }
    else if (Units >= 200 && Units < 300) {
      IBill = Units * 20.1 ;
      Rate = 20.1 ; }
    else if (Units >= 300 && Units < 500) {
      IBill = Units * 27.1 ;
      Rate = 27.1 ; }
    else if (Units >= 500) {
      IBill = Units * 35.9 ;
      Rate = 35.9 ; }
    else 
      printf("Wrong Input") ;
    if (IBill > 18000) {
      Surcharge = IBill * 0.15 ;
      Bill = IBill + Surcharge ; }
    else
      Bill = IBill ;
    printf("Customer ID : %d \n Units Consumed : %d \n Amount Charges @Rs.%.2f per unit: %.2f \n Surcharge Amount: %.2f \n Net Amount Paid by the Customer: %.2f",ID,Units,Rate,IBill,Surcharge,Bill) ;
    return 0 ;
}

     