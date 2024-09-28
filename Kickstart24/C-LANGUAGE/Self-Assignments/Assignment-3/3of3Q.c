// Write a program to swap values of two int variables.
// we can use temporary variable method or Addition/Subtraction method or XOR method

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your values : ");
    scanf("%d %d",&a,&b);
    a = a + b;
    // First value we will get the addition value for the first variable.
    b = a - b;
    // Second variable will be the subtraction from the first value 
    a = a - b;
    // The first value will be now the result of initial a and final b.
    printf("The values of your data is manipulated and it's now %d and %d ",a,b);
    printf("\n");
    return 0;
}