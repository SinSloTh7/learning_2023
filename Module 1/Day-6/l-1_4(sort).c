#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int compare_marks(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;
    return (studentB->marks - studentA->marks);
}

void sort_students(struct Student* students, int num_students) {
    qsort(students, num_students, sizeof(struct Student), compare_marks);
}

void display_students(const struct Student* students, int num_students) {
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student* students = malloc(num_students * sizeof(struct Student));

    for (int i = 0; i < num_students; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    sort_students(students, num_students);
    display_students(students, num_students);

    free(students);

    return 0;
}
