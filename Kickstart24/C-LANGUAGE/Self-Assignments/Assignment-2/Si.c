// Calculate simple interest
// Principal amount, rate, time

#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("Enter the values of Principle, rate and time : ");
    scanf("%d%d%d",&p,&r,&t);
    si = (p*r*t)/100.0;
    printf("The Simple interest of the given amount is %f .",si);
    printf("\n");
    return 0;
}