// Write a program to calculate area of a rectangle. Input appropriate data from the user.

#include<stdio.h>
int main(){
    int length,breadth,Area_Rectangle;
    printf("Enter the value of length and breadth to calculate the area of rectangle : \n",length,breadth);
    scanf("%d%d",&length,&breadth);
    Area_Rectangle = length*breadth;
    printf("The area of the rectangle is %d ",Area_Rectangle);
    printf("\n");
    return 0;
}