// WAP to find the area of the circle. Take radius of circle from the user as input and print the result in below given format.

#include<stdio.h>
int main(){
    int radius;
    float Area_circle;
    printf("Enter the radius of a circle : ",radius);
    scanf("%d",&radius);
    Area_circle = 3.14*radius*radius;
    printf("The area of circle is %0.2f having the radius %d ",Area_circle,radius);
    printf("\n");
    return 0;
}