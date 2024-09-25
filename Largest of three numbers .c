//Write a C program to find the largest of three numbers using nested if-else conditions

#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers to check highest number:\n");
    scanf("%d %d %d", &num1 , &num2 ,&num3);
    
    if(num1 >= num2 && num1 >= num3){
        printf("%d is the highest numbers\n", num1);
    } 
    else if(num2 >= num1 && num2 >= num3){
        printf("%d is the highest numbers\n", num2);
    } else{
        printf("%d is the highest numbers\n", num3);
    }
    
    return 0;
}
