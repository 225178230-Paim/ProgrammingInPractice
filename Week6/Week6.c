# include <stdio.h>
#include <string.h>


// created functions
float captureSalaries(float salaries[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        total += salaries[i];
    }
    return total / size; // Return average salary
}

float captureBudgets(float budgets[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
        total += budgets[i];
    }
    return total / size; // Return average budget
}

float captureRegistrationNumbers(char registrationNumbers[][20], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter registration number for vehicle %d: ", i + 1);
        scanf("%s", registrationNumbers[i]);
    }
    return 0; // This function doesn't return a meaningful value
}

int findSalary(float *salaries, int size, float targetSalary) {
    for (int i = 0; i < size; i++) {
        if (salaries[i] == targetSalary)
            return i;
    }
    return -1; // Return -1 if not found
}

int targetRegistrationNumber(char registrationNumbers[][20], int size, char targetRegistration[20]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(registrationNumbers[i], targetRegistration) == 0) {
            printf("Registration number %s found at index %d\n", targetRegistration, i);
            return i;
        }
    }
    printf("Registration number %s not found\n", targetRegistration);
    return -1;
}

int main(){
    // Declare variables
    float  salaries[50], averageSalary, highestSalary, lowestSalary, targetSalary;
    int searchIndex, searchIndexR;
    float budgets[10], averageBudget, highestBudget, lowestBudget;
    char registrationNumbers[20][20], targetRegistration[20];

    //call the functions
    averageSalary = captureSalaries(salaries, 50);
    // display all salaries
    for (int i = 0; i < 50; i++) {
        printf("Salary for employee %d: %.2f\n", i + 1, salaries[i]);
    }
    // find highest and lowest salary
    highestSalary = salaries[0];
    lowestSalary = salaries[0];
    for (int i = 1; i < 50; i++) {
        if (salaries[i] > highestSalary) {
            highestSalary = salaries[i];
        }
        if (salaries[i] < lowestSalary) {
            lowestSalary = salaries[i];
        }
    }

    // Search for a specific salary
    printf("Enter the salary to search for: ");
    scanf("%f", &targetSalary);
    searchIndex = findSalary(salaries, 50, targetSalary);
    if (searchIndex != -1) {
        printf("Salary %.2f found at index %d\n", targetSalary, searchIndex);
    } else {
        printf("Salary %.2f not found\n", targetSalary);
    }

    averageBudget = captureBudgets(budgets, 10);
    // display budgets
    for (int i = 0; i < 10; i++) {
        printf("Budget for department %d: %.2f\n", i + 1, budgets[i]);
    }
    // calculate the totalBudget
    float totalBudget = 0;
    for (int i = 0; i < 10; i++) {
        totalBudget += budgets[i];
    }
    printf("Total budget: %.2f\n", totalBudget);
    // calculate the averageBudget
    printf("Average budget: %.2f\n", averageBudget);
    // find highest and lowest budget
    highestBudget = budgets[0];
    lowestBudget = budgets[0];
    for (int i = 1; i < 10; i++) {
        if (budgets[i] > highestBudget) {
            highestBudget = budgets[i];
        }
        if (budgets[i] < lowestBudget) {
            lowestBudget = budgets[i];
        }
    }
    printf("Highest budget: %.2f\n", highestBudget);
    printf("Lowest budget: %.2f\n", lowestBudget);

   
    //ccapture registration numbers
    captureRegistrationNumbers(registrationNumbers, 20);

    // display registration numbers
    for (int i = 0; i < 20; i++) {
        printf("Registration number for vehicle %d: %s\n", i + 1, registrationNumbers[i]);
    }
    // search for a specific registration number
    printf("Enter the registration number to search for: ");
    scanf("%s", targetRegistration);    
    
    searchIndexR = targetRegistrationNumber(registrationNumbers, 20, targetRegistration);
    if (searchIndexR != -1) {
        printf("Registration number %s found at index %d\n", targetRegistration, searchIndexR);
    }

    return 0;
}