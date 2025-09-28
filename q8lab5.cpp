#include <stdio.h>
#include <string.h>

int main() {
    int sectionChoice;
    int coffeeSizeChoice, qty, coffeeTypeChoice;
    float pricePerCup = 0, total = 0;
    char coffeeType[20], coffeeSize[10];

    printf("Welcome to Our Restaurant!\n");
    printf("1. Coffee Shop\n");
    printf("2. Burger Hub\n");
    printf("3. Ice Cream Parlour\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &sectionChoice);

    if (sectionChoice == 2) {
        printf("Your order will be handled by Burger Hub.\n");
    } 
    else if (sectionChoice == 3) {
        printf("Your order will be handled by Ice Cream Parlour.\n");
    } 
    else if (sectionChoice == 1) {
        printf("\n--- Coffee Shop Menu ---\n");
        printf("Select coffee size:\n");
        printf("1. Small (Rs.100)\n");
        printf("2. Medium (Rs.150)\n");
        printf("3. Large (Rs.200)\n");
        printf("Enter choice: ");
        scanf("%d", &coffeeSizeChoice);

        if (coffeeSizeChoice == 1) {
            pricePerCup = 100;
            strcpy(coffeeSize, "Small");
        } else if (coffeeSizeChoice == 2) {
            pricePerCup = 150;
            strcpy(coffeeSize, "Medium");
        } else if (coffeeSizeChoice == 3) {
            pricePerCup = 200;
            strcpy(coffeeSize, "Large");
        } else {
            printf("Invalid coffee size!\n");
            return 0;
        }

        printf("How many coffees do you want? ");
        scanf("%d", &qty);

        if (qty > 1) {
            printf("Check our combo offers!\n");
            
            if (coffeeSizeChoice == 3 && qty >= 2) {
                printf("Combo Applied: 10%% off for Large size (2 or more)\n");
                pricePerCup *= 0.9;
            }
        }

        printf("\nSelect Coffee Type:\n");
        printf("1. Regular\n");
        printf("2. Cappuccino\n");
        printf("3. Latte\n");
        printf("Enter choice: ");
        scanf("%d", &coffeeTypeChoice);

        if (coffeeTypeChoice == 1) {
            strcpy(coffeeType, "Regular");
        } else if (coffeeTypeChoice == 2) {
            strcpy(coffeeType, "Cappuccino");
        } else if (coffeeTypeChoice == 3) {
            strcpy(coffeeType, "Latte");
        } else {
            printf("Invalid coffee type!\n");
            return 0;
        }

        total = pricePerCup * qty;

        printf("\n--- Final Bill ---\n");
        printf("Coffee Shop Order\n");
        printf("Size: %s\n", coffeeSize);
        printf("Type: %s\n", coffeeType);
        printf("Quantity: %d\n", qty);
        printf("Total Amount: Rs. %.2f\n", total);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
