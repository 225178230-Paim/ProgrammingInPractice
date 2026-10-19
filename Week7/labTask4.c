//Copying Supplier Information

#include <stdio.h>
#include <string.h>

//Use strcpy() to copy the supplier name into another character array. 
int main() {
    char original[100];
    char backup[100];

    printf("Enter supplier name: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0';

    // Copy the original supplier name to backup

    strcpy(backup, original);

    // Display the original and backup supplier names
    
    printf("\nOriginal: %s\n", original);
    printf("Backup  : %s\n", backup);

    return 0;
}