// Wap to take date as a input in below given format and convert the date format and display the result as given below:
// User Input date format - "DD/MM/YY" (27/11/2024)
// Output format - "DAY - DD, Month - MM, Year - YY" (Day-27,Month-11,Year-2024)

#include<stdio.h>
int main(){
    int DD,MM,YY;
    printf("Enter the date (DD/MM/YY) : ");
    scanf("%d/%d/%d",&DD,&MM,&YY);
    printf("%d/%d/%d",DD,MM,YY);
    printf("\n");
    return 0;
}