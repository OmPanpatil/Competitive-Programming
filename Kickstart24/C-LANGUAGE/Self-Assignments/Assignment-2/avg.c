// Write a program to calculate average of three integers. Numbers are given by the user.

#include<stdio.h>
int main(){
    int a,b,c;
    float average;
    printf("Enter the values of the integers a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    average = (a+b+c)/3.0;
    printf("The average of three integers is %0.2f .",average);
    printf("\n");
    return 0;
}