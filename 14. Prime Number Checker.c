// Write a C program to check whether a given number is prime or not using a for loop and conditional statements
#include<stdio.h>

int main(){
    int n, is_prime = 1;
    printf("Enter a number to check prime :\n");
    scanf("%d", &n);
    
    if(n < 2){
       is_prime = 0;
    } 
    else{
        for(int i = 2; i<n ; i++){
            if( n%i == 0){
                is_prime= 0;
                break;
            }
        }
    }
    if(is_prime){
        printf("%d is a Prime number.\n", n);
    }
    else{
        printf("%d is not a Prime number.\n", n);
    }
    return 0;
}
