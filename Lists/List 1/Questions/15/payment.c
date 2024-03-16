#include <stdio.h>

float gross(int days_worked, float daily_wage) 
{
    return daily_wage * days_worked;
}

float bonification(int days_worked, float gross_amount) 
{
    float bonus = 0;
    if (days_worked > 10 && days_worked <= 20) {
        bonus = gross_amount * 0.20;
    } 
    else if (days_worked > 20) {
        bonus = gross_amount * 0.30;
    }
    return bonus;
}

float taxation(float gross_amount) 
{
    return gross_amount * 0.10;
}

float net(float gross_amount, float tax) 
{
    return gross_amount - tax;
}

int main() 
{
    float daily_wage = 50.25;
    int days_worked;
    float gross_amount, bonus, tax, net_amount;

    // Input the number of days worked
    printf("Enter the number of days worked by the salesperson: ");
    if (scanf("%d", &days_worked) != 1 || days_worked <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // calculates gross amount
    gross_amount = gross(days_worked, daily_wage);

    // calculate bonification
    bonus = bonification(days_worked, gross_amount);

    // calculates taxation
    tax = taxation(gross_amount + bonus);

    // calculates net amount
    net_amount = net(gross_amount + bonus, tax);

    printf("Net amount to be paid: R$%.2f\n", net_amount);

    return 0;
}