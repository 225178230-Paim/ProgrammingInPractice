#include <stdio.h>

// create functions
int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i; // Return the index of the employee ID
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    // Declare variables
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int size = sizeof(employeeIDs) / sizeof(employeeIDs[0]);
    int searchID;

    // Prompt user for input
    printf("Enter Employee ID to search: ");
    scanf("%d", &searchID);

    // Call the search function
    int index = searchEmployee(searchID, employeeIDs, size);

    // Display result
    if (index != -1) {
        printf("Employee ID %d found at index %d.\n", searchID, index);
    } else {
        printf("Employee ID %d not found.\n", searchID);
    }

    return 0;
}