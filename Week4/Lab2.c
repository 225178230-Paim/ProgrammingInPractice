#include <stdio.h>

int main()
{
 char supplierName[50];
 double price;
 double budget;
 int registered, completeDocuments;
 

 printf("Enter supplier name: "); 
 scanf("%49s", supplierName); 
 
 printf("Enter tender price: "); 
 scanf("%lf", &price); 
 
 printf("Enter available budget: "); 
 scanf("%lf", &budget); 
 
 printf("Is the supplier registered? (1=Yes, 0=No):");
 scanf("%d", &registered);
 
 printf("Are all documents complete? (1=Yes, 0=No): ");
 scanf("%d", &completeDocuments);

 if (registered == 1 && completeDocuments == 1) 
{  
    printf("\nSupplier: %s\n", supplierName);
    printf("Status: Qualified\n");

    if (budget > price)
    {
         printf("\nSupplier: %s\n", supplierName);
         printf("Status: Qualified\n");
         printf("Preferred Supplier\n");
    }
   else if (price > budget){
           printf("\nSupplier: %s\n", supplierName);
           printf("Status: Qualified\n");
            }
}

 else {
    printf("\nSupplier: %s\n", supplierName); 
    printf("Status: Disqualified\n"); 
 }
 
    return 0;
}