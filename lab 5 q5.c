#include <stdio.h>

int main() {
    int a, b, c, largest;

    
    printf("Enter marks of three students: ");
    scanf("%d %d %d", &a, &b, &c);

    
    largest = (a > b) ? ((a > c) ? a : c) 
                      : ((b > c) ? b : c);

    
    printf("The largest mark is: %d\n", largest);

    return 0;
}
