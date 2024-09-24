// Write a program to calculate the sum of two integers

#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Please enter the two value : ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("The sum of two integer is %d and %d is %d",a,b,sum);
    printf("\n");
    return 0;
}