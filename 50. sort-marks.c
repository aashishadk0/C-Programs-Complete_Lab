//WAP to input ID, Name, Marks of 4 students and display the details in descending order on the basis of marks.
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[4];
    int i, j;
    struct Student temp;

    // Input student records
    for (i = 0; i < 4; i++) {
        printf("Enter details for student (Id, Name, Marks) %d: ", i + 1);
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].marks);
    }

    // Sort students by marks (Bubble Sort)
    for (i = 0; i < 4 - 1; i++) {
        for (j = 0; j < 4 - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap students[j] and students[j + 1]
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display student records
    printf("\nStudent Records (Sorted by Marks):\n");
    printf("ID\tName\tMarks\n");
    for (i = 0; i < 4; i++) {
        printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
