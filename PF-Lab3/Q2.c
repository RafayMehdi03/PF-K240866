#include <stdio.h>
int main() 
{ int x,y,temp; 
  printf("Enter 1st Number: ");
  scanf("%d",&x);
  printf("Enter 2nd Number: ");
  scanf("%d",&y);
  temp = x;
  x = y;
  y = x;
  printf("1st number is %d, 2nd number is %d",x,y);
}