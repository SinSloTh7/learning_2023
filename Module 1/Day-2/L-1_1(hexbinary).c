#include <stdio.h>
#include <stdint.h>

void printExponent(double num) {
    uint64_t exponent = *((uint64_t*)&num) >> 52 & 0x7FF;

    printf("Exponent in hexadecimal: 0x%lX\n", exponent);
    printf("Exponent in binary: 0b");

    for (int i = 10; i >= 0; i--)
        printf("%d", (exponent >> i) & 1);

    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}
