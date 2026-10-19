#include <stdio.h>

// create functions
float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int main() {
    // Declare variables
    float revenue, expenses, budget;

    // Assign values
    printf("Enter total revenue: ");
    scanf("%f", &revenue);
    printf("Enter total expenses: ");
    scanf("%f", &expenses);

    // Call the function
    budget = calculateBudget(revenue, expenses);
    if (budget > 0) {
        printf("Budget SURPLUS.\n");
    } else {
        if (budget < 0) {
            printf("Warning: Budget DEFICIT.\n");
        } else {
            printf("Budget is BALANCED.\n");
        }
    }

    // Display the result
    printf("Total Budget: $%.2f\n", budget);

    return 0;
}