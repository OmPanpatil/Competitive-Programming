// Write a program to calculate sum of two integers. Number are taken from the user through keyboard

#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the two values of the integers : ",a,b);
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("The sum of two integers is %d and %d are %d",a,b,sum);
    printf("\n");
    return 0;

}