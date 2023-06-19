#include <stdio.h>

int main() {
    int arr[] = {12, 84, 20, 36, 64, 56, 72, 10, 45, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    float average = (float) sum / size;
    printf("Sum: %d\nAverage: %.2f\n", sum, average);
    return 0;
}
