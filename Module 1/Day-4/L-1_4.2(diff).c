#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    printf("Sum of odd elements: %d\n", sum);
    return 0;
}
