#include <stdio.h>

int main() {
    int x = 2, y = 5, z = 3;

    printf("Expression: x + y * z > 10 && x - z < y || !(y %% z)\n");
    printf("Values: x=%d, y=%d, z=%d\n\n", x, y, z);

    
    int step1 = y * z;
    printf("Step 1: y * z = %d * %d = %d\n", y, z, step1);

    
    int step2 = x + step1;
    printf("Step 2: x + (y * z) = %d + %d = %d\n", x, step1, step2);


    int step3 = y % z;
    printf("Step 3: y %% z = %d %% %d = %d\n", y, z, step3);

    
    int step4 = x - z;
    printf("Step 4: x - z = %d - %d = %d\n", x, z, step4);

    
    int step5_left = step2 > 10;
    int step5_right = step4 < y;
    printf("Step 5a: (x + y*z) > 10 ? %d > 10 = %d\n", step2, step5_left);
    printf("Step 5b: (x - z) < y ? %d < %d = %d\n", step4, y, step5_right);

    
    int step6 = step5_left && step5_right;
    printf("Step 6: (Step 5a && Step 5b) = %d && %d = %d\n", step5_left, step5_right, step6);

    
    int step7 = !(step3);
    printf("Step 7: !(y %% z) = !%d = %d\n", step3, step7);

    
    int result = step6 || step7;
    printf("Step 8: (Step 6 || Step 7) = %d || %d = %d\n", step6, step7, result);

    printf("\nFinal Result of expression = %d\n", result);

    return 0;
}
