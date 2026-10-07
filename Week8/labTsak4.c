#include <stdio.h>

// create functions
float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int main() {
    // Declare variables
    float revenue, expenses, budget;

    // Call the function
    budget = calculateBudget(revenue, expenses);

    // Display the result
    printf("Total Budget: $%.2f\n", budget);

    return 0;
}