// Supplier search
#include <stdio.h>
#include <string.h>

int main() {
    // Create two supplier names
    char supplier1[] = "ABC Office Supplies";
    char supplier2[] = "Namibia Stationery";
    char searchName[100];

    // Ask the user to enter a supplier name
    printf("Enter supplier to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    // search for the supplier name in the two suppliers
    
    if (strcmp(supplier1, searchName) == 0 || strcmp(supplier2, searchName) == 0) {
        printf("Supplier found.\n");
    } 
    else {
        printf("Supplier not found.\n");
    }

    return 0;
}