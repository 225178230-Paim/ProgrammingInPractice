#include <stdio.h>

int main() {
    double revenue, expenses, balance;
    int departments;
    double payroll, procurement, assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n");

    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n----------- BUDGET OVERVIEW -------------\n");
    printf("Revenue:   R %.2f\n", revenue);
    printf("Expenses:  R %.2f\n", expenses);
    printf("Balance:   R %.2f\n", balance);
    printf("-------------------------------------------\n\n");

    printf("Enter Number of Departments: ");
    scanf("%d", &departments);

    printf("Enter Total Payroll Costs: ");
    scanf("%lf", &payroll);

    printf("Enter Total Procurement Costs: ");
    scanf("%lf", &procurement);

    printf("Enter Total Value of Assets: ");
    scanf("%lf", &assets);

    printf("\n========= MUNICIPAL FINANCIAL SUMMARY =========\n");
    printf("Number of Departments: %d\n", departments);
    printf("Payroll Costs:        R %.2f\n", payroll);
    printf("Procurement Costs:    R %.2f\n", procurement);
    printf("Total Assets:         R %.2f\n", assets);
    printf("-------------------------------------------------\n");
    printf("Revenue:              R %.2f\n", revenue);
    printf("Expenses:             R %.2f\n", expenses);
    printf("Balance:              R %.2f\n", balance);
    printf("=================================================\n");

    return 0;
}