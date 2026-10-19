//combining functions
#include <stdio.h>
float calculateVAT(float amount) {
    float vatRate = 0.15; // 15% VAT
    return amount * vatRate;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

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

    int choice;
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
                printf("\nfloat vat = calculateVAT(price);\n\n");
                break;
            case 2:
                printf("\nfloat salary = calculateSalary(basic, housing, transport);\n\n");
                break;
            case 3:
                printf("\nfloat budget = calculateBudget(revenue, expenses);\n\n");
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