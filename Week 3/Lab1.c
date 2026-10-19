#include <stdio.h>

int main()
{
    double baseSalary;
    double housingAllowance;
    double transportAllowance;
    double tax;
    double grossSalary;
    double netSalary;

    // Prompts
    
    printf("Enter Base Salary:");
    scanf("%lf, &baseSalary ");
    
    printf("Enter Housing allowance:");
    scanf("%lf, &housingAllowance");

    printf("Enter Transport Allowance:");
    scanf("%lf, &transportAllowance");

    printf("Enter Tax: ");
    scanf("%lf, &tax");

    // Calculations

    grossSalary = baseSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - tax;   

    // Outputs

    printf("\nGross Salary: %lf\n",grossSalary);
    printf("\nNet Salary: %lf\n",netSalary);
    
    
    return 0;
}

