#include <stdio.h>
int main()
{ int P,T ;
  float R ;
  printf("Enter principal value which should be between Rs 100 - Rs 1,000,000: ");
  scanf("%d",&P);
  printf("Enter rate of interest which should be in percentage and between 5-10: ",R);
  scanf("%f",&R);
  printf("Enter time period which should be in years and between 1-10: ");
  scanf("%d",&T);
  printf("Simple Interest Is: %g",P*(R/100)*T);
}
