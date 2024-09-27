//Write a program to calculate the factorial of a number using a while loop
#include<stdio.h>

int main(){
    int n, i=1, f = 1 ;
    printf(" Enter a number to find factorial:\n");
    scanf("%d", &n);
    while (n>=i){
        f=f*i;
        i++;
    }
    printf(" Factorial of %d is %d.", n , f);
    return 0;
}
