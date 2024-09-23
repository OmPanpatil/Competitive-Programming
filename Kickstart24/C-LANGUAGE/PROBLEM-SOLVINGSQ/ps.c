// Write printf statements to print the following on the screen.
// (1)5 6, (2)a=5 and b=6, (3)a=6 & b=5, (4)Value of a is 5 and b is 6, (5)Sum of 5 and 6 is 11, (6)5+6=11.

//(1) 5 6
// #include<stdio.h>
// int main(){
//     int a=5,b=6;
//     printf("%d %d",a,b);
//     return 0;
// }

// individualnumber(){
//     printf("%d %d",&a,&b );
//     return 0;
// }

// (2)a=5 and b=6

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("the value of a and b: ",a,b);
    scanf("%d%d",&a,&b);
    printf("\n the value of a=%d and b=%d",a,b);
    getch();
}