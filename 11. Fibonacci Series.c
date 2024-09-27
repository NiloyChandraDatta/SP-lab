//Write a C program to generate the Fibonacci series up to n terms using a for loop
#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers of terms :\n");
    scanf("%d",&n);
    int a = 0, b= 1, temp;
    printf(" Fibonacci series for %d terms :", n);
    if(n==0){
        
    }
    if(n==1){
        printf("%d", a);
    }
    else if(n == 2){
        printf("%d , %d", a ,b);
    } else {
        printf("%d , %d ", a, b);
        for(int i = 3; i<= n; i++){
            int c = a+b;
            printf(", %d ", c);
            a = b;
            b = c;
        }
        }
        return 0;
    }
