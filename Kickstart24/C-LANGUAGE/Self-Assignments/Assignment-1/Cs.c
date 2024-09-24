// Write a program to calculate square of a given number. Number is entered by the user.

#include<stdio.h>
int main(){
    int a,square;
    printf("Enter the number u want the square for : ",a);
    scanf("%d",&a);
    square = a*a;
    printf("The square of the given number %d is %d : ",a,square);
    printf("\n");
    return 0;
}