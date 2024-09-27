// Write a C program that takes a number and determines whether it's positive, negative, or zero using if-else statements
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("%d is a Postive Number.\n", n);
    }
    else if(n<0){
        printf("%d is a Negative Number.\n", n);
    } else {
        printf("%d is Zero.\n", n);
    }
    return 0;
}
