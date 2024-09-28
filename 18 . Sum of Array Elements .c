//Write a program that takes an array of integers and finds the sum of its elements using a loop

#include<stdio.h>

int main(){
    int n;
    printf("How many elements in the array ?\n");
    scanf("%d", &n);

    int arr[n], sum = 0;
    printf("Enter the elements of the array :\n");
    for(int i = 0; i<n ; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("The sum of the elements is : %d\n", sum);
    return 0;
}
