// Write a program to count the number of digits in an integer using a while loop
#include<stdio.h>

int main(){
    int n, digits = 0;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    
    if(n == 0){
        digits= 1;
    } else {
        if(n<0){
            n=-n;
        }
    while(n>0){
        digits++;
        n /= 10;
    }
    }
    printf("The number of digits: %d\n", digits);
    
    return 0;
}
