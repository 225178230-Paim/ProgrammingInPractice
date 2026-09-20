#include <stdio.h>

// Constants
#define VAT_RATE 0.15
#define MAX_ITEMS 5

int main() {
    int choice, quantity;
    double unitPrice = 0.00, subtotal, vat, total;
    char Menu[5] =

    // Menu of items
    printf("\nSelect Item: \n");
    printf("1. Call of Duty: Modern Warfare 4 - 99.99 \n");
    printf("2. Black Myth: Wukong - 41.99  \n");
    printf("3. God of War Ragnarök - 59.99 \n");
    printf("4. Sekiro™: Shadows Die Twice - GOTY Edition - 59.99 \n");
    prinf("5. ELDEN RING - 59.99 \n");

    // capture items choice
    printf("Enter choice: ");
    scanf("%d", &choice);
    
        // 4. Validate selection and assign unit price
    switch (choice) {
        case 1: unitPrice = 99.99; break;
        case 2: unitPrice = 41.99; break;
        case 3: unitPrice = 59.99; break;
        case 4: unitPrice = 59.99; break;
        case 5: unitPrice = 59.99; break;
        default:
            printf("Invalid item selectoin\n");
            return 1; // terminate immediately
    }
         // 5. Capture quantity
        printf("Enter Quantity: ");
        scanf("%d", &quantity);

         // 6. Validate quantity
    if (quantity <= 0) {
        printf("Invalid quantity\n");
        return 1; // terminate immediately
    }

    // 7. Perform calculations (STRICT formulas)
    subtotal = unitPrice * quantity;

    vat = subtotal * VAT_RATE;
    total = subtotal + vat;


}