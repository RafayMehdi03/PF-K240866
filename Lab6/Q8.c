#include <stdio.h>
int main()
{
  int x;
  for (x=0;x<5;x++) {
  	 if((x==0)||(x==4)) {
  	   printf("* * * * *\n") ; }
  	 else if ((x==1)||(x==3)) {
  	   printf("  *   *  \n") ; }
  	 else {
  	   printf("    *    \n") ; }
  }
}
     