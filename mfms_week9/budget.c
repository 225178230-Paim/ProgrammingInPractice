#include <stdio.h>
#include "budget.h"
#include "utilities.h"

// function to addBudget, calculateBudgetBalance.

int addBudget(int budget, int amount) {
    return budget + amount;
}

int calculateBudgetBalance(int totalBudget, int totalExpenses) {
    return totalBudget - totalExpenses;
}

void handleBudgetMenu(int *totalBudget, int *totalExpenses) {
    int choice, amount;

    do {
        printf("\n=== Budget Menu ===\n");
        printf("1. Add to budget\n");
        printf("2. Record an expense\n");
        printf("3. View balance\n");
        printf("4. Back to main menu\n");

        choice = getValidInt("Enter your choice (1-4): ", 1, 4);

        switch (choice) {
            case 1:
                amount = getValidInt("Amount to add: ", 1, 1000000);
                *totalBudget = addBudget(*totalBudget, amount);
                printf("Budget updated. Total budget: %d\n", *totalBudget);
                break;
            case 2:
                amount = getValidInt("Expense amount: ", 1, 1000000);
                *totalExpenses += amount;
                printf("Expense recorded. Total expenses: %d\n", *totalExpenses);
                if (*totalExpenses > *totalBudget) {
                    printf("Warning: expenses exceed the budget!\n");
                }
                break;
            case 3:
                printf("Total budget:   %d\n", *totalBudget);
                printf("Total expenses: %d\n", *totalExpenses);
                printf("Balance:        %d\n",
                       calculateBudgetBalance(*totalBudget, *totalExpenses));
                break;
            case 4:
                printf("Returning to main menu.\n");
                break;
        }
    } while (choice != 4);
}