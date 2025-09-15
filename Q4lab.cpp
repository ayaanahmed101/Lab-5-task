#include <stdio.h>
#include <math.h>

int main() {
    double radius, area, circumference, sqrt_radius;
    const double pi = 3.141592653589793;

    
    printf("Enter the radius of the circular water tank: ");
    scanf("%lf", &radius);

    
    area = pi * radius * radius;

    
    circumference = 2 * pi * radius;

    
    sqrt_radius = sqrt(radius);

    
    printf("Area of the tank: %.2lf\n", area);
    printf("Circumference of the tank: %.2lf\n", circumference);
    printf("Square root of the radius: %.2lf\n", sqrt_radius);

    return 0;
}

