#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void search_student(const struct Student* students, int num_students, const char* search_name) {
    int found = 0;
    for (int i = 0; i < num_students; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    struct Student students[] = {
        {1, "Rohan", 78.5},
        {2, "Akash", 85.0},
        {3, "Sidhhart", 69.3},
        {4, "Devesh", 98.2},
        {5, "Tanu", 52.2}
    };
    int num_students = sizeof(students) / sizeof(struct Student);

    char search_name[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", search_name);

    search_student(students, num_students, search_name);

    return 0;
}
