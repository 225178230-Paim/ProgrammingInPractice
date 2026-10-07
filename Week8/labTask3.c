#include <stdio.h>

// create functions
float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}
int main() {
    // Declare variables
    float basicSalary, housingAllowance, transportAllowance, GrossSalary;

    // Assign values
    basicSalary = 15000.00;
    housingAllowance = 3000.00;
    transportAllowance = 2000.00;

    // Call the function
    GrossSalary = calculateSalary(basicSalary, housingAllowance, transportAllowance);

    // Display the result
    printf("Total Salary: $%.2f\n", GrossSalary);

    return 0;
}