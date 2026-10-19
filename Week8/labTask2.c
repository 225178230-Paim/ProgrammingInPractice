#include <stdio.h>

// Create functions
float calculateVAT(float amount) {
    float vatRate = 0.15; // 15% VAT
    return amount * vatRate;
}

int main() {
    // Declare variables
    float price;
   
    //Call the functions
    printf("Enter the price: ");
    scanf("%f", &price);

    float vat = calculateVAT(price);
    printf("Price: $%.2f \n VAT: $%.2f", price, vat);

    
    return 0;
}