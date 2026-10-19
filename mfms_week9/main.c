#include <stdio.h>
#include <string.h>
#include "employees.h"
#include "budget.h"
#include "reports.h"
#include "utilities.h"

// Function prototypes
void displayMainMenu(void) {
      printf("\n=====================================================\n");
    printf("        MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("=====================================================\n");
    printf("1. Employees\n");
    printf("2. Budget\n");
    printf("3. Reports\n");
    printf("4. Exit\n");
}

void handleEmployeeMenu(int ids[], char names[][50], int *size);

int main() {

    int ids[100];
    char names[100][50];
    int size = 0;
    int totalBudget = 0, totalExpenses = 0;
    int choice;

    do {
        displayMainMenu();
        choice = getValidInt("Enter your choice (1-4): ", 1, 4);

        switch (choice) {
            case 1: handleEmployeeMenu(ids, names, &size); break;
            case 2: handleBudgetMenu(&totalBudget, &totalExpenses); break;
            case 3: handleReportsMenu(ids, names, size, totalBudget, totalExpenses); break;
            case 4: printf("Exiting the program. Goodbye!\n"); break;
        }
    } while (choice != 4);

    return 0;
}