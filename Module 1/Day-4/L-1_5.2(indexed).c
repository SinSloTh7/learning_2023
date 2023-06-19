#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int oddSum = 0;
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i += 2) {
        oddSum += arr[i];
    }
    printf("Sum of odd-indexed elements: %d\n", oddSum);
    return 0;
}
