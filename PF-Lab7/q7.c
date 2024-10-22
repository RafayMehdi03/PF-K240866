#include <stdio.h>
#include <stdlib.h>

int main() {
    char expression[100];
    int numbers[100];
    char operators[100];
    int numIndex = 0, opIndex = 0;
    char currentNumber[100];
    int numLength = 0;

    printf("Enter an expression (e.g. 20+10-30): ");
    fgets(expression, sizeof(expression), stdin);

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] >= '0' && expression[i] <= '9') {
            currentNumber[numLength++] = expression[i];
        } else {
            if (numLength > 0) {
                currentNumber[numLength] = '\0'; 
                numbers[numIndex++] = atoi(currentNumber); 
                numLength = 0; 
            }

            if (expression[i] == '+' || expression[i] == '-') {
                operators[opIndex++] = expression[i]; 
            } else if (expression[i] != ' ' && expression[i] != '\n') {
                printf("Invalid character in expression\n");
                break ;
            }
        }
    }
    if (numLength > 0) {
        currentNumber[numLength] = '\0';
        numbers[numIndex++] = atoi(currentNumber);
    }
    if (numIndex - 1 != opIndex) {
        printf("Invalid expression: null character after operator\n");
        
    }
    int result = numbers[0];
    for (int i = 0; i < opIndex; i++) {
        if (operators[i] == '+') {
            result += numbers[i + 1];
        } else if (operators[i] == '-') {
            result -= numbers[i + 1];
        }
    }
    printf("Result: %d\n", result);
}
