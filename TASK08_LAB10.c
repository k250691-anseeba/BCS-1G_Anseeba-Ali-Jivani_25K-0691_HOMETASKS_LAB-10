#include <stdio.h>

int main() {

    // Categories
    char appetizers[3][30] = {"Spring Rolls", "Garlic Bread", "Salad"};
    char mainCourse[3][30] = {"Grilled Chicken", "Pasta Alfredo", "Beef Burger"};
    char desserts[3][30] = {"Ice Cream", "Brownie", "Fruit Custard"};

    float appetizerPrices[3] = {6.50, 8.00, 5.75};
    float mainPrices[3]      = {12.99, 14.50, 10.25};
    float dessertPrices[3]   = {4.99, 7.25, 6.00};

    int i;

 
    printf("\n========== RESTAURANT MENU ==========\n");
    // Appetizers
    printf("\n--- Appetizers ---\n");
    for(i=0; i<3; i++){
        printf("%-20s  $%.2f\n", appetizers[i], appetizerPrices[i]);
    }

    // Main Course
    printf("\n--- Main Course ---\n");
    for(i=0; i<3; i++){
        printf("%-20s  $%.2f\n", mainCourse[i], mainPrices[i]);
    }

    // Desserts
    printf("\n--- Desserts ---\n");
    for(i=0; i<3; i++){
        printf("%-20s  $%.2f\n", desserts[i], dessertPrices[i]);
    }



    //budget-friendly (< $10)
    printf("\n\n===== Budget-Friendly Items (Under $10) =====\n\n");

    // From appetizers
    for(i=0; i<3; i++){
        if(appetizerPrices[i] < 10) {
            printf("%-20s  $%.2f   (Appetizers)\n", appetizers[i], appetizerPrices[i]);
        }
    }

    // From main course
    for(i=0; i<3; i++){
        if(mainPrices[i] < 10) {
            printf("%-20s  $%.2f   (Main Course)\n", mainCourse[i], mainPrices[i]);
        }
    }

    // From desserts
    for(i=0; i<3; i++){
        if(dessertPrices[i] < 10) {
            printf("%-20s  $%.2f   (Desserts)\n", desserts[i], dessertPrices[i]);
        }
    }

    return 0;
}

