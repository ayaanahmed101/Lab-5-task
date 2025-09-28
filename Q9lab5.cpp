#include <stdio.h>

int main() {
    int pin, enteredPin;
    float balance = 10000.0;   
    float amount;

    pin = 1234;  

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);

        if (amount > balance) {
            printf("Insufficient Balance.\n");
        } else {
            balance -= amount;
            printf("Transaction Successful!\n");
            printf("Remaining Balance: %.2f\n", balance);
        }
    } else {
        printf("Incorrect PIN. Access Denied.\n");
    }

    return 0;
}
