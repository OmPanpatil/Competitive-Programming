// Write a program to check whether the given number is positive or Non-positive.
#include<stdio.h>
int main(){
    int num;
    printf("Enter your Number : ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("The given number %d is positive.",num);
    }
    else{
        printf(" The given number %d is negative.",num);
    }

    printf("\n");
    return 0;
    
}