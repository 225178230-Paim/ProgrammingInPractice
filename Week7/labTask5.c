// Construct a Supplier Description
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char town[50];
    char description[200];

    printf("Enter supplier name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';

    // The program should construct the sentence using strings rather than writing the sentence directly.

    strcpy(description, name);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");

    printf("\n%s\n", description);

    return 0;
}