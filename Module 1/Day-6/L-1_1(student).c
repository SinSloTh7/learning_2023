#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parse_string(const char* str, struct Student* student) {
    sscanf(str, "%d %19s %f", &(student->rollno), student->name, &(student->marks));
}

int main() {
    const char* input = "1001 Aron 100.00";
    struct Student* students = malloc(sizeof(struct Student));
    int num_students = 0;

    char* token = strtok((char*)input, ",");
    while (token != NULL) {

        struct Student student;
        parse_string(token, &student);

        num_students++;
        students = realloc(students, num_students * sizeof(struct Student));
        students[num_students - 1] = student;

        token = strtok(NULL, ",");
    }

    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    free(students);

    return 0;
}
