#include <stdio.h>

int main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    (num % 2 == 0) ? printf("Even\n") : 
    (num % 3 == 0) ? printf("Divisible by 3\n") : 
    printf("Odd and not divisible by 3\n");

    return 0;
}

