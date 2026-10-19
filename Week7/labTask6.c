//MFMS SUPPLIER MODULE 

#include <stdio.h>
#include <string.h>

#define MAX 10

// Supplier storage (character arrays)
char names[MAX][100];
char emails[MAX][100];
char phones[MAX][20];
char towns[MAX][50];
int count = 0;

void displayMenu() {
    printf("\n================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("================================\n");
    printf("1. Add Supplier\n");
    printf("2. Display Supplier\n");
    printf("3. Search Supplier\n");
    printf("4. Show Name Length\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

// Reading a full line (with spaces)
void readLine(const char *prompt, char *buffer, int size) {
    printf("%s", prompt);
    fgets(buffer, size, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
}

void addSupplier() {
    char temp[100];

    if (count >= MAX) {
        printf("\nSupplier list is full.\n");
        return;
    }

    readLine("Enter supplier name: ", temp, sizeof(temp));
    strcpy(names[count], temp);

    readLine("Enter email: ", temp, sizeof(temp));
    strcpy(emails[count], temp);

    readLine("Enter phone: ", temp, sizeof(temp));
    strcpy(phones[count], temp);
    
    readLine("Enter town: ", temp, sizeof(temp));
    strcpy(towns[count], temp);

    count++;
    printf("\nSupplier added successfully.\n");
}

void displaySuppliers() {
    char description[200];
    int i;

    if (count == 0) {
        printf("\nNo suppliers have been added yet.\n");
        return;
    }

    for (i = 0; i < count; i++) {
        // Build the description sentence with strcpy and strcat
        strcpy(description, names[i]);
        strcat(description, " operates in ");
        strcat(description, towns[i]);
        strcat(description, ".");

        printf("\n--- SUPPLIER %d ---\n", i + 1);
        printf("Name : %s\n", names[i]);
        printf("Email: %s\n", emails[i]);
        printf("Phone: %s\n", phones[i]);
        printf("Town : %s\n", towns[i]);
        printf("%s\n", description);
    }
}

void searchSupplier() {
    char searchName[100];
    int i, found = 0;

    if (count == 0) {
        printf("\nNo suppliers have been added yet.\n");
        return;
    }

    readLine("Enter supplier to search: ", searchName, sizeof(searchName));

    for (i = 0; i < count; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("\nSupplier found: %s (%s)\n", names[i], towns[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nSupplier not found.\n");
    }
}

void showNameLength() {
    int i;

    if (count == 0) {
        printf("\nNo suppliers have been added yet.\n");
        return;
    }

    for (i = 0; i < count; i++) {
        printf("\n%s - name length: %d\n", names[i], (int)strlen(names[i]));
    }
}

int main() {
    int choice;
    char line[20];

    do {
        displayMenu();

        // Read the choice as a line, then convert it to a number
        fgets(line, sizeof(line), stdin);
        if (sscanf(line, "%d", &choice) != 1) {
            choice = 0;
        }

        switch (choice) {
            case 1: addSupplier();      break;
            case 2: displaySuppliers(); break;
            case 3: searchSupplier();   break;
            case 4: showNameLength();   break;
            case 5: printf("\nExiting program. Thank you!\n"); break;
            default: printf("\nInvalid choice. Please enter 1-5.\n");
        }
    } while (choice != 5);

    return 0;
}