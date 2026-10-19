#include <stdio.h>

// create functions
double calculateSalary(double basic, double housing, double transport) {
    return basic + housing + transport;
}
int main() {
    // Declare variables
    double basicSalary;
    double housingAllowance, transportAllowance, GrossSalary;

    // Assign values
    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);
    printf("Enter housing allowance: ");
    scanf("%lf", &housingAllowance);
    printf("Enter transport allowance: ");
    scanf("%lf", &transportAllowance);

    // Call the function
    GrossSalary = calculateSalary(basicSalary, housingAllowance, transportAllowance);

    // Display the result
    printf("Total Salary: $%.2f\n", GrossSalary);

    return 0;
}