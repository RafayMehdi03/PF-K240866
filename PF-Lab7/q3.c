#include <stdio.h>
int main(){
  char name[50] ;
  int i=0,length=0 ,temp;
  scanf("%s",name) ;
  while(name[i] != '\0'){
        length ++;
        i++ ;
  }
  printf("length of the string is: %d\n",length) ;
  for(i=0;i<(length/2);i++){
        temp=name[i] ;
        name[i] = name[length-1-i] ;
        name[length-1-i] = temp ;
  
  }
       printf("reversed string: %s",name);         
                    
}