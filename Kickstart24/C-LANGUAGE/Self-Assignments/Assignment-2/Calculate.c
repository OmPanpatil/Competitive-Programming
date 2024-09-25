// Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
// For example: A seller gets the banana for 60rs per dozen of 12 bananas and we want for 25 bananas per dozen then (c.p 60rs /quantity or no.of bananas) *25.
// For selling the bananas they sell at 80rs per dozen of 12 bananas and we want for 25 bananas then (S.p 80rs/ quantity 12 bananas )*25
// Because we will get the bananas as per 1 banana value divided by the quantity from the c.p and s.p and then multiplying the value of 1 banana we get and we want for 25 bananas then 1 value of banana *25
// [(s.p -c.p)*25]/Quantity

#include<stdio.h>
int main(){
    float cp,sp,profit;
    printf("Enter the value of Cost Price and Selling Price : ");
    scanf("%f%f",&cp,&sp);
    profit = (sp-cp)*25/12;
    printf("The profit earned upon selling the 25 bananas is %f .",profit);
    printf("\n");
    return 0;
}