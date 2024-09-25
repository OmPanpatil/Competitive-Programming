// Write a program to input three characters from the user and display characters with their corresponding ASCII Code(numbers).

// #include<stdio.h>
// int main(){
//     int a;
//     char ch;
//     char hh;
//     printf("Enter the first, second and third value for the ASCII : ");
//     scanf("%c%c%c",&a,&ch,&hh);
//     printf("The value of first value is %c - %d\n",a,a);
//     printf("The value of second value is %c - %d\n",ch,ch);
//     printf("The value of third value is %c - %d\n",hh,hh);
//     printf("\n");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char a,b,c;
//     printf("Enter the three characters : ");
//     scanf("%c%c%c",&a,&b,&c);
//     printf("%c - %d\n",a,a);
//     printf("%c - %d\n",b,b);
//     printf("%c - %d\n",c,c);
//     printf("\n");
//     return 0;
// }

#include<stdio.h>
int main(){
    char a,b,c;
    printf("Enter the three characters : ");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c - %d\n",a,a);
    printf("%c - %d\n",b,b);
    printf("%c - %d\n",c,c);
    printf("\n");
    return 0;
}

// By using Delimiters from Scanf