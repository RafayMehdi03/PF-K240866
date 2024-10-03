#include <stdio.h>
int main()
{
	int a ;
	for(a=64;a<70;a++) {
		if ((a==64)||(a==69))
			printf("%c %c %c %c %c\n",a+1,a+2,a+3,a+4,a+5) ;
		else
		    printf("%c       %c\n",a+1,a+5) ;
		
		}
	}