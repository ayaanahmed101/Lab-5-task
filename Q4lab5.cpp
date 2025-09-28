#include <stdio.h>

int main() {
    unsigned int a = 90;
    unsigned int b = 60;

    unsigned int and_ab = a & b;
    unsigned int xor_ab = a ^ b;
    unsigned int result = (a & b) | (a ^ b);
    unsigned int or_direct = a | b;

    printf("a = %u = %u%u%u%u %u%u%u%u\n", a,
           (a >> 7) & 1, (a >> 6) & 1, (a >> 5) & 1, (a >> 4) & 1,
           (a >> 3) & 1, (a >> 2) & 1, (a >> 1) & 1, (a >> 0) & 1);

    printf("b = %u = %u%u%u%u %u%u%u%u\n", b,
           (b >> 7) & 1, (b >> 6) & 1, (b >> 5) & 1, (b >> 4) & 1,
           (b >> 3) & 1, (b >> 2) & 1, (b >> 1) & 1, (b >> 0) & 1);

    printf("a & b = %u = %u%u%u%u %u%u%u%u\n", and_ab,
           (and_ab >> 7) & 1, (and_ab >> 6) & 1, (and_ab >> 5) & 1, (and_ab >> 4) & 1,
           (and_ab >> 3) & 1, (and_ab >> 2) & 1, (and_ab >> 1) & 1, (and_ab >> 0) & 1);

    printf("a ^ b = %u = %u%u%u%u %u%u%u%u\n", xor_ab,
           (xor_ab >> 7) & 1, (xor_ab >> 6) & 1, (xor_ab >> 5) & 1, (xor_ab >> 4) & 1,
           (xor_ab >> 3) & 1, (xor_ab >> 2) & 1, (xor_ab >> 1) & 1, (xor_ab >> 0) & 1);

    printf("(a & b) | (a ^ b) = %u = %u%u%u%u %u%u%u%u\n", result,
           (result >> 7) & 1, (result >> 6) & 1, (result >> 5) & 1, (result >> 4) & 1,
           (result >> 3) & 1, (result >> 2) & 1, (result >> 1) & 1, (result >> 0) & 1);

    printf("a | b = %u = %u%u%u%u %u%u%u%u\n", or_direct,
           (or_direct >> 7) & 1, (or_direct >> 6) & 1, (or_direct >> 5) & 1, (or_direct >> 4) & 1,
           (or_direct >> 3) & 1, (or_direct >> 2) & 1, (or_direct >> 1) & 1, (or_direct >> 0) & 1);

    return 0;
}
