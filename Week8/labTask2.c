#include <stdio.h>

// Create functions
float calculateVAT(float amount) {
    float vatRate = 0.15; // 15% VAT
    return amount * vatRate;
}

int main() {
    // Declare variables
    float price, vat;
    //Call the functions
    price = 1000.00; 
    float vat = calculateVAT(price);
    printf("Price: $%.2f \n VAT: $%.2f", price, vat);

    
    return 0;
}