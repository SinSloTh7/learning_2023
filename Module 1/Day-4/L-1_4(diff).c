#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int diff = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        diff += (arr[i] % 2 == 0) ? arr[i] : -arr[i];
    }

    printf("Difference between the sum of even and odd elements: %d\n", diff);

    return 0;
}
