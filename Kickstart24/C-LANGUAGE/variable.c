// Write a program to print value of a variable

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the value of the variable a and b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    c=a-b;
    c=a/b;
    c=a*b;
    printf("The value of the variables a and b are:",&a,&b,&c);
    getch();
}