// Write a program for the output of the following:

#include<stdio.h>
int main(){
    int x=5,y;
    // x=5 and y=null
    y=x++;
    // First assignment operator will run y will be equal to x i.e. 5 and x will increment by one value i.e. 6.
    printf("%d %d",x,y);
}

// The post increment operator will increase the value first and then print the original value.