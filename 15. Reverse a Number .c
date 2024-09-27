// Write a C program to reverse a given integer using a while loop
#include<stdio.h>

int main(){
    int n, temp, negative= 0, reverse = 0, rem;

    printf("Enter an integer :\n");
    scanf("%d", &n);
    temp = n;

    if(n<0){
        negative = 1;
        n = -n;
    }

    while(n != 0){
        rem = n%10;
        reverse = reverse*10 + rem;
        n /= 10;
        }
    if(negative){
        reverse = - reverse;
    }

    printf("Reversed number of %d is %d\n", temp, reverse);

    return 0;
}
