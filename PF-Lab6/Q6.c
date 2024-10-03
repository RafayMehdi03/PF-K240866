#include <stdio.h>
int main()
{
  int x;
  for (x=0;x<=5;x++) {
  	if ((x==0)||(x==5))
  	   printf("*       *\n") ;
  	else
  	   printf("* * * * *\n") ;
  } 
}