#include <stdio.h>
#include <string.h>
int BinaryToDecimal(int number);
int DecimalToBinary(int number);
void DecimalToHexadecimal(int number);
void HexadecimalToDecimal(char hexNumber[]);
void BinaryToHexadecimal(int number);
void HexadecimalToBinary(char hexNumber[]);
int main(){
    char hexNumber [20] ;
	int option,num,result ;
	printf("Enter the operation number of the operation you want to perform\n1.Binary To Decimal\n2.Decimal To Binary\n3.Decimal To Hexadecimal\n4.Hexadecimal To Decimal\n5.Binary To Hexadecimal\n6.Hexadecimal To Binary\n") ;
	scanf("%d",&option) ;
	switch(option){
		case 1:
			printf("Enter A Binary Number To Convert Into Decimal: ") ;
			scanf("%d",&num) ;
			result=BinaryToDecimal(num) ;
			printf("The binary number in decimal is %d.",result) ;
			break ;
		case 2:
			printf("Enter A Decimal Number To Convert Into Binary: ") ;
			scanf("%d",&num) ;
			DecimalToBinary(num) ;
			result=DecimalToBinary(num) ;
			if(result==0){
			   printf("Invalid Input");
			}
			else{
			     printf("The decimal number in binary is %d.",result) ;
			     break ;
			}
		case 3:
			printf("Enter A Decimal Number To Convert Into Hexadecimal: ") ;
			scanf("%d",&num) ;
			DecimalToHexadecimal(num) ;
			break ;
		case 4:
			printf("Enter A Hexadecimal Number To Convert Into Decimal: ") ;
			scanf("%s",hexNumber) ;
			HexadecimalToDecimal(hexNumber) ;
			break ;
		case 5:
			printf("Enter A Binary Number To Convert Into Hexadecimal: ") ;
			scanf("%d",&num) ;
			BinaryToHexadecimal(num) ;
			break;
		case 6:
			printf("Enter A Hexadecimal Number To Convert Into Binary: ") ;
			scanf("%s",hexNumber) ;
			HexadecimalToBinary(hexNumber) ;
			break;
		default:
			printf("Option number ust be between 1 and 6") ;
    }
}

int BinaryToDecimal(int number){
	int temp,value=1,decimal=0;
	while(number!=0){
	    temp = number % 2 ;
		if (temp==1){
		    decimal+=value;
		    value=value*2;
		    number=number/10;
	    }
	    else if(temp==0){
	    	value=value*2;
		    number=number/10;
		}
		else{
		    return 0 ;
	    }
    }
    if(decimal>0){
    	return decimal ;
	}
}

int DecimalToBinary(int number){
    int binary = 0;
    int base = 1;
    int lastDigit ;
	while (number > 0) {
        lastDigit = number % 2;        
        binary += lastDigit * base;   
        number = number / 2;                        
        base = base * 10;                   
	}
    return binary;
}
void DecimalToHexadecimal(int number) {
    char hexStr[20];
    int index = 0;
    if (number == 0) {
        hexStr[index++] = '0';
    } else {
        while (number > 0) {
            int remainder = number % 16; 
            if (remainder < 10) {
                hexStr[index++] = remainder + '0';
            } else {
                hexStr[index++] = remainder - 10 + 'A';
            }
            number /= 16;
        }
    }

    hexStr[index] = '\0'; 
    for (int i = 0; i < index / 2; i++) {
        char tempChar = hexStr[i];
        hexStr[i] = hexStr[index - 1 - i];
        hexStr[index - 1 - i] = tempChar;
    }

    printf("This number in hexadecimal is %s\n", hexStr);
}


void HexadecimalToDecimal(char hexNumber[10]){
	int i,decimal=0,temp,value=1;
	for(i=0;i<strlen(hexNumber);i++){
		temp=hexNumber[strlen(hexNumber)-i-1] ;
		if(temp>48&&temp<58){
			temp-=48;
			decimal+=(temp*value) ;
			value = value * 16 ;
		}
		else if(temp>64&&temp<71){
			temp-=55;
			decimal+=(temp*value) ;
			value = value * 16 ;
		}
		else{
		    printf("The hexadecimal input is wrong.") ;
		    break;
		}
	}
	if(decimal>0)
	    printf("This number in decimal is %d",decimal) ;
}

#include <stdio.h>
int main(){
	char arr[50][10] ;
	int height,i,colSpace=0,x,y,j ;
	printf("Enter The Height Of Each Figure: ");
	scanf("%d",&height) ;
	for(i=0;i<height;i++){
	    colSpace = 0 ;
		for(x=0;x<height-i-1;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<2*i;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<((2*(height-i-1))+1);x++){
		    arr[i][colSpace] = ' ' ;
		    colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<2*i;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<(2*(height-i-1)+1);x++){
		    arr[i][colSpace] = ' ' ;
		    colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<2*i;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
		arr[i][colSpace] = '*' ;
		colSpace ++ ;
		for(x=0;x<height-i-1;x++){
			arr[i][colSpace] = ' ' ;
			colSpace ++ ;
		}
	}
    for(i=0;i<height;i++){
        for(j=0;j<=colSpace-1;j++)
	  	  printf("%c ",arr[i][j]) ;
	  	printf("\n") ;
    }
}