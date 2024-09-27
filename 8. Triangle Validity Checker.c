//Write a program that takes the lengths of three sides of a triangle and determines if the triangle is valid based on the conditions of a valid triangle using conditional statements
#include<stdio.h>

int main(){
    int a, b, c;
    printf(" Enter the length of the three sides of triangle : \n");
    scanf(" %d %d %d", &a, &b, &c);
    if(a+b > c && b+c > a && c+a > b ){
        printf(" The triangle is valid.\n");
    } else {
        printf(" The triangle is not valid.\n");
    }
    return 0;
}
