// Write a program to calculate circumference of a circle

#include<stdio.h>
int main(){
    int r;
    float c;
    printf("Enter the radius of a circle: ");
    scanf("%d,",&r);
    c = 2*3.14*r;
    printf("The circumference of the circle is %f",c);
    printf("\n");
    return 0;
}