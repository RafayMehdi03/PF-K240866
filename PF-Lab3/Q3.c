#include <stdio.h>
int main()
{ int Salary;
  float TaxRate;
  printf("Enter Your Salary: ");
  scanf("%d",&Salary);
  printf("Enter The Tax Rate in Percentage: ");
  scanf("%f",&TaxRate);
  printf("Your salary after tax $ %d",Salary*((100-TaxRate)/100));
}