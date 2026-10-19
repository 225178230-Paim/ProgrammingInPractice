#include <stdio.h>

// create functions
void displayMenu() {
    printf("==================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

int main() {
    
    //declare variables
    int choice;

    // Handle user choice
  do
    {
        displayMenu();

        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n');
            choice = 0;
        }

        switch (choice)
        {
            case 1:
                printf("\ncalculateVAT()\n\n");
                break;
            case 2:
                printf("\ncalculateSalary()\n\n");
                break;
            case 3:
                printf("\ncalculateBudget()\n\n");
                break;
            case 4:
                printf("\nExiting program. Thank you!\n");
                break;
            default:
                printf("\nInvalid choice. Please enter 1-4.\n\n");
        }
    } while (choice != 4);

    return 0;
}