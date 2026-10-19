#include <stdio.h>
#include <string.h>
#include "reports.h"
#include "utilities.h"

void employeeReport(int ids[], char names[][50], int size) {
    printf("Employee Report:\n");
    printf("-----------------\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s\n", ids[i], names[i]);
    }
}

void budgetReport(int totalBudget, int totalExpenses) {
    printf("Budget Report:\n");
    printf("--------------\n");
    printf("Total Budget: %d\n", totalBudget);
    printf("Total Expenses: %d\n", totalExpenses);
    printf("Balance: %d\n", totalBudget - totalExpenses);
}

void handleReportsMenu(int ids[], char names[][50], int size,
                       int totalBudget, int totalExpenses) {
    int choice;

    do {
        printf("\n=== Reports Menu ===\n");
        printf("1. Employee report\n");
        printf("2. Budget report\n");
        printf("3. Back to main menu\n");

        choice = getValidInt("Enter your choice (1-3): ", 1, 3);

        switch (choice) {
            case 1:
                if (size == 0) {
                    printf("No employees to report.\n");
                } else {
                    employeeReport(ids, names, size);
                }
                break;
            case 2:
                budgetReport(totalBudget, totalExpenses);
                break;
            case 3:
                printf("Returning to main menu.\n");
                break;
        }
    } while (choice != 3);
}