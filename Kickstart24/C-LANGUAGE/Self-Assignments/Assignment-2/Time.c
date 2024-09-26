// Wap to take input as time in below given format and convert the time format and display the result as given below:
// User input date format - "HH:MM"
// Output format - "HH Hour and MM Minute"

#include<stdio.h>
int main(){
    int h,m;
    printf("Enter time (\"HH : MM\") : ");
    scanf("%d%d",&h,&m);
    printf("%d Hour and %d Minute",h,m);
    printf("\n");
    return 0;
}