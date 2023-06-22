#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1, struct Point* p2) {
    struct Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    struct Point point1, point2;

    printf("Enter x and y coordinates for Point 1: ");
    scanf("%d %d", &(point1.x), &(point1.y));

    printf("Enter x and y coordinates for Point 2: ");
    scanf("%d %d", &(point2.x), &(point2.y));

    printf("\nBefore swapping: Point 1 (%d, %d), Point 2 (%d, %d)\n", point1.x, point1.y, point2.x, point2.y);

    swapPoints(&point1, &point2);

    printf("\nAfter swapping: Point 1 (%d, %d), Point 2 (%d, %d)\n", point1.x, point1.y, point2.x, point2.y);

    return 0;
}
