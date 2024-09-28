// Write a C program to find the maximum element in an array using loops and conditional statements
#include<stdio.h>

int main(){
    int n;
    printf("How many elements in the array? \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i =1 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The maximum element in the array is : %d\n", max);

    return 0;
}
