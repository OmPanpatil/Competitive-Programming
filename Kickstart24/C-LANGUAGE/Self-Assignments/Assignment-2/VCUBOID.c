// Write a program to calculate volume of cuboid

#include<stdio.h>
int main(){
    int l,b,h,Volume;
    printf("Enter the length, breadth and height : ");
    scanf("%d%d%d",&l,&b,&h);
    Volume = l*b*h;
    printf("The volume of the given data is %d .", Volume);
    printf("\n");
    return 0;
}