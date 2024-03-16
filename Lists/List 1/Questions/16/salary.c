
#include <stdio.h>

// function to get data from the user
void getData(float *class_hour_rate, float *hours_worked, float *inss_discount) 
{
    printf("Enter the class hour rate: ");
    scanf("%f", class_hour_rate);

    printf("Enter the number of hours worked in the month: ");
    scanf("%f", hours_worked);

    printf("Enter the INSS discount percentage: ");
    scanf("%f", inss_discount);
}

// function to calculate gross salary
float gross(float class_hour_rate, float hours_worked) 
{
    return class_hour_rate * hours_worked;
}

// function to calculate net salary after INSS deduction
float net(float gross_salary, float inss_discount) 
{
    return gross_salary * (1 - inss_discount / 100);
}

// function to display gross salary and net salary 
void displaySalaries(float gross_salary, float net_salary) 
{
    printf("\nGross salary: $%.2f\n", gross_salary);
    printf("Net salary: $%.2f\n", net_salary);
}

int main() 
{
    float class_hour_rate, hours_worked, inss_discount, gross_salary, net_salary;

    // gets data from the user
    getData(&class_hour_rate, &hours_worked, &inss_discount);

    // calculates gross salary
    gross_salary = gross(class_hour_rate, hours_worked);

    // calculates net salary after INSS deduction
    net_salary = net(gross_salary, inss_discount);

    // displays gross and net salaries
    displaySalaries(gross_salary, net_salary);

    return 0;
}
