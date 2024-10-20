#include <stdio.h>
int main(){
    char text[15] ;
    int i=0,count=0,limit,IsPalindrome=0;
    printf("Enter your word: ");
    scanf("%s",text);
    while(!(text[i]=='\0')) 
    {
        count++ ;
	i++;
    }
    limit = count / 2;
    for(i=0;i<limit;i++){
	if(text[i]==text[count-1-i])
           IsPalindrome = 1;
	else{
	   IsPalindrome = 0;
	   break;}
    }
    if(IsPalindrome==1)
        printf("%s is a Palindrome",text);
    else if(IsPalindrome==0)
	printf("%s is not a Palindrome",text);
}