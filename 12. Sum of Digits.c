// Write a program that takes an integer as input and calculates the sum of its digits using a while loop
#include<stdio.h>

int main(){
    int n , s = 0 , d;

    printf("Enter an integers :\n");
    scanf("%d", &n);

    if(n<0){
        n = -n;
    }

    while(n != 0){
        d = n % 10;
        s += d;
        n /= 10;
    }
    printf("Sum of digits : %d\n", s);

}
