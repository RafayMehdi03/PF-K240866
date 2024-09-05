#include <stdio.h>
int main()
{ int x1,y1,x2,y2,Cy,Cx ;
  printf("Enter x-coordinate of the 1st point: ");
  scanf("%d",&x1);
  printf("Enter y-coordinate of the 1st point: ");
  scanf("%d",&y1);
  printf("Enter x-coordinate of the 2nd point: ");
  scanf("%d",&x2);
  printf("Enter y-coordinate of the 2nd point: ");
  scanf("%d",&y2);
  Cy = y2 - y1 ;
  Cx = x2 - x1 ;
  float gradient = Cy / Cx ;
  printf("Gradient is: %.2f",gradient);}   