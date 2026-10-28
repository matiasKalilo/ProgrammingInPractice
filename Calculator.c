#include<stdio.h> 
int main(){
    double totalRevenue;
    double totalExpenses;
    double Balance;

    printf("Enter the total revenue:");
    scanf("%lf",&totalRevenue);
    printf("\nEnter the total expenses:");
    scanf("%lf",&totalExpenses);

    Balance= totalRevenue - totalExpenses;

    printf("\n The total revenue:%.2f",totalRevenue);
    printf("\n The total expenses:%.2f",totalExpenses);
    printf("\n Balance:%.2f",Balance);
    
    return 0;
}
