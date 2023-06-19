#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int evenSum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i += 2) {
        evenSum += arr[i];
    }
    printf("Sum of even-indexed elements: %d\n", evenSum);
    return 0;
}
