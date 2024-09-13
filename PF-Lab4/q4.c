#include <stdio.h>

int main() {
   char InputCharacter ;
   printf("Enter A Character: ") ;
   scanf(" %c",&InputCharacter) ;
   if (InputCharacter >= 'a' && InputCharacter <= 'z')
      printf("Character is a small alphabet.") ;
   else if (InputCharacter >= 'A' && InputCharacter <= 'Z')
      printf("Character is a capital alphabet.") ;
   else if (InputCharacter >= '1' && InputCharacter <= '9')
      printf("Character is a digit.") ;
   else 
      printf("Character is a special character.") ;
return 0 ;
}
      