// A program to sort an array of integers in ascending order using a basic sorting algorithm like bubble sort.

#include<stdio.h>

int main(){
    int n;
    
    printf("How many element :\n");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements in the array :\n");
    for(int i = 0; i < n; i++ ) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i< n-1; i++) {
        int swapped = 0;
        for(int j = 0 ; j< n - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = temp;
                 swapped = 1;
            }
        }
        if(!swapped) {
            break;
        }
    }
    
    printf("Sorted Array: ");
    for(int i = 0; i<n ; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}
    
    
