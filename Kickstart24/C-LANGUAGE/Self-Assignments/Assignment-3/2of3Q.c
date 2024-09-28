// To print a given number without it's last digit

#include<stdio.h>
int main(){
    int number;
    printf("Emter the number to print W/O it's last digit : ");
    scanf("%d",&number);
    int newnumber = number / 10;
    printf("The latest digit of ur given number without it's last number is %d ",newnumber);
    printf("\n");
    return 0;
}