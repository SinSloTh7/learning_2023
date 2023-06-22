#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(const struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(const struct Box *boxPtr) {
    const double l = boxPtr->length;
    const double w = boxPtr->width;
    const double h = boxPtr->height;
    return 2 * (l * w + l * h + w * h);
}

int main() {
    struct Box myBox;
    struct Box *ptrBox = &myBox;
    
    printf("Enter the length, width, and height of the box: ");
    scanf("%lf %lf %lf", &(ptrBox->length), &(ptrBox->width), &(ptrBox->height));
    
    printf("Volume: %.2f\n", calculateVolume(ptrBox));
    printf("Surface Area: %.2f\n", calculateSurfaceArea(ptrBox));
    
    return 0;
}