#include <stdio.h>
#include <string.h>
#include "utilities.h"

//Function declarations to addEmployee, listEmployees, and searchEmployee 
int addEmployee(int id, char name[], int ids[], char names[][50], int *size) {
    if (*size >= 100) {
        printf("Employee list is full.\n");
        return 0;
    }
    ids[*size] = id;
    strcpy(names[*size], name);
    (*size)++;
    return 1;
}

int listEmployee(int ids[], char names[][50], int size) {
    if (size == 0) {
        printf("No employees to display.\n");
        return 0;
    }
    printf("Employee List:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s\n", ids[i], names[i]);
    }
    return 1;
}

int searchEmployee(int id, int ids[], char names[][50], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            printf("Employee found: ID: %d, Name: %s\n", ids[i], names[i]);
            return 1;
        }
    }
    printf("Employee with ID %d not found.\n", id);
    return 0;
}

void handleEmployeeMenu(int ids[], char names[][50], int *size) {
    int choice, id;
    char name[50];
    do {
        printf("\nEmployee Menu\n1. Add\n2. List\n3. Search\n4. Back\n");
        choice = getValidInt("Enter your choice (1-4): ", 1, 4);
        switch (choice) {
            case 1:
                id = getValidInt("Employee ID: ", 1, 999999);
                printf("Name: ");
                scanf(" %49[^\n]", name);       // allows spaces, limits length
                addEmployee(id, name, ids, names, size);
                break;
            case 2:
                listEmployee(ids, names, *size);
                break;
            case 3:
                id = getValidInt("ID to search: ", 1, 999999);
                searchEmployee(id, ids, names, *size);
                break;
        }
    } while (choice != 4);
}
