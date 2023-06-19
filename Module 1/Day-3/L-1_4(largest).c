#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    for (int i = 0; i < 4; i++) {
        int temp = num / (int)pow(10, i) / 10 * (int)pow(10, i) + num % (int)pow(10, i);
        if (temp > largest) {
            largest = temp;
        }
    }
    return largest;
}
int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largestNumber = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largestNumber);
    return 0;
}
