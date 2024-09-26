// Write a program that takes a score as input and assigns a grade (A, B, C, D, F) using the switch-case statement
#include<stdio.h>

int main(){
    int n;
    printf("Enter your marks :\n");
    scanf("%d", &n);
    int g = n/10;
    switch(g){
    case 10:
    case 9:
    case 8:
    printf("You get A+\n");
    break;
    
    case 7:
    printf("You get A\n");
    break;
    
    case 6:
    printf("You get A-\n");
    break;
    
    case 5:
    printf("You get B\n");
    break;
    
    case 4:
    printf("You get C\n");
    break;
    
    default:
    printf("You are fail\n");
    }
    return 0;
}
