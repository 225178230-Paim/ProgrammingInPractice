#include <stdio.h>

#define NUM_EMPLOYEES 50

int main(void) {
    double salary[NUM_EMPLOYEES];
    int i;
    double totalSalary;
    double averageSalary = 0.0;
    double highestSalary = 0.0;
    double lowestSalary = 0.0;
    double total = 0.0;

    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%lf", &salary[i]);
    }

    total= totalSalary  + salary[i];
    printf("\nTotal salary paid: %.2lf\n", total);

    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Employee %d: %.2lf\n", i + 1, salary[i]);
        total += salary[i];
    }

        if (i == 1) { 
            highestSalary = salary[i]; 
            lowestSalary = salary[i]; 
        } 
 
        if (salary[i] > highestSalary) { 
            highestSalary = salary[i]; 
        } 
 
        if (salary[i] < lowestSalary) { 
            lowestSalary = salary[i]; 
        } 
    printf("\n--- Salary Report ---\n"); 
    printf("Average salary: %.2lf\n", total / NUM_EMPLOYEES);
    printf("Highest salary: %.2lf\n", highestSalary);
    printf("Lowest salary: %.2lf\n", lowestSalary);

    return 0;
}