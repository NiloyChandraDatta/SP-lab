//Write a program to check if a character is a vowel or a consonant using the switch-case statement
#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character :\n");
    scanf("%c", &ch);
    
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a Vowel.\n", ch);
        break;
        
        default:
        printf("%c is a Consonant.\n", ch);
        }
        
    return 0;
}
