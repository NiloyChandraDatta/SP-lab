//checking even odd

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to check Even or Odd\n");
    scanf("%d", &n);
    if(n%2 == 0){
        printf("%d is even\n", n);
    }
    else if(n%2 == 1){
        printf("%d is odd\n", n);
    }
    
    return 0;
}
