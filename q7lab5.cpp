#include <stdio.h>

int main() {
    float attendance;
    char midterm, fee;

    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 75) {
        printf("You are NOT eligible for the Final Exam (attendance below 75%%).\n");
        return 0;
    }

    printf("Did you pass the midterm exam? (P for Pass, F for Fail): ");
    scanf(" %c", &midterm);

    if (midterm == 'F' || midterm == 'f') {
        printf("You are NOT eligible for the Final Exam (failed midterm).\n");
        return 0;
    }

    printf("Have you paid the exam fee? (Y for Yes, N for No): ");
    scanf(" %c", &fee);

    if (fee == 'Y' || fee == 'y') {
        printf("You are eligible for the Final Exam.\n");
    } else {
        printf("Please clear your dues to appear in the Final Exam.\n");
    }

    return 0;
}
