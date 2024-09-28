// Write a program to print unit digit of a number 

// Unit digit is of first unit value of digits.
// n=n*10+d

#include<stdio.h>
int main(){
    int number,digit;
    printf("Enter a number and also it's unit digit : ");
    scanf("%d%d",&number,&digit);
    int newnumber = number * 10 + digit;
    printf("Enter a number and unit digit of your number is %d",newnumber);
    printf("\n");
    return 0;
}

// #include<stdio.h>
// int main(){
//     int number,print;
//     printf("Enter your number : ");
//     scanf("%d",&number);
//     print = number/10;
//     printf("The unit digit of ur number is : ",print);
//     printf("\n");
//     return 0;
// }