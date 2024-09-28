//Write a program to reverse the elements of an array using a loop

#include<stdio.h>

int main(){
    int n, reverse;
    printf("How many elements in the array ?\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array :\n");
    for(int i = 0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array element in reverse order: \n");
    
    for(int i = n-1; i>= 0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
