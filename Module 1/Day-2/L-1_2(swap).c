#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void* a, void* b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int num1, num2;
    float float1, float2;
    char str1[100], str2[100];

    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    printf("Enter two floating-point numbers: ");
    scanf("%f%f", &float1, &float2);
    printf("Before swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);
    swap(&float1, &float2, sizeof(float));
    printf("After swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);

    printf("Enter two strings: ");
    scanf("%s%s", str1, str2);
    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);
    swap(str1, str2, sizeof(char) * (strlen(str1) + 1));
    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}
