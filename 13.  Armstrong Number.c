// Write a C program to check if a number is an Armstrong number using a while loop.
#include<stdio.h>
#include<math.h>

int main(){
    int n, temp, rem, s= 0, d = 0;
    printf("Enter an integers :\n");
    scanf("%d", &n);
    temp = n;
    while(n != 0){
        n /= 10;
        d++;
    }
    n= temp;

    while(n != 0){
        rem = n % 10;
        s+= pow(rem, d);
        n /= 10;
    }

    if(s == temp){
        printf("%d is an Armstrong number.\n", temp);
    } else {
        printf("%d is not an Armstrong number.\n", temp);
    }
    return 0;
}
