// Write a C program to display the multiplication table of a given number using a for loop
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number to get multiplication table:\n ");
    scanf(" %d", &n);
    for(int i= 1 ; i<11; i++){
        printf(" %d x %d = %d\n", i , n, i*n);
    }
  return 0;
}
