//WAP to input ID, Name, Marks of 5 students and display the details in alphabetical order on the basis of name.
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int i, j;
    struct Student temp;

    // Input student records
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID\tName\tMarks\n");
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].marks);
    }

    // Sort students by name (Bubble Sort)
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Swap students[j] and students[j + 1]
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display student records
    printf("\nStudent Records (Sorted by Name):\n");
    printf("ID\tName\tMarks\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
