#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physics, math, chemistry, total, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Marks in Physics, Math, and Chemistry: ");
    scanf("%f %f %f", &physics, &math, &chemistry);

    total = physics + math + chemistry;
    percentage = (total / 300) * 100;

    printf("\n------ Student Summary ------\n");
    printf("Roll No: %d\nName: %s\nPhysics: %.2f\nMath: %.2f\nChemistry: %.2f\nTotal Marks: %.2f\nPercentage: %.2f%%\n",
           rollNo, name, physics, math, chemistry, total, percentage);

    return 0;
}
