// Write a program to input a character from the user and print it's ASCII code.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the value for the character constant : ");
    scanf("%c",&ch);
    printf("The ASCII code of the given character constant is %d ", ch);
    printf("\n");
    return 0;
}