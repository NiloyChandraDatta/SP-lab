// Write a program to create a simple calculator using the switch-case statement. The program should perform addition, subtraction, multiplication, and division based on user input
#include<stdio.h>

int main(){
    int n1;
    printf("Enter first number:\n");
    scanf(" %d", &n1);
    char operator;
    printf("Enter a operator:\n");
    scanf(" %c", &operator);
    int n2;
    printf("Enter second number:\n");
    scanf(" %d", &n2);
    switch(operator){
        case '+' :
        printf("%d + %d = %d\n",n1, n2, n1+n2);
        break;
        case '-' :
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
        break;
        case '*' :
        printf("%d * %d = %d\n", n1, n2, n1 * n2);
        break;
        case '/' :
        switch(n2){
            case 0:
            printf(" You cannot devide any number by zero\n");
            break;
            default:
            printf("%d/%d = %d\n", n1, n2, n1 /n2);
            break;
        }
        break;
        default:
        printf("Invalid operator.\n");
    }
    
    return 0;
}
