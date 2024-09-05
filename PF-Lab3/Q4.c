#include <stdio.h>
int main()
{ float Average,ForwardCost,BackwardCost;
  printf("Enter the fuel average of your car. Make sure to add .0 in case it is a whole number: ");
  scanf("%g",&Average);
  ForwardCost = (1207/Average)*118;
  BackwardCost = (1207/Average)*123;
  printf("Total Cost Is : %.2f",ForwardCost + BackwardCost);
}