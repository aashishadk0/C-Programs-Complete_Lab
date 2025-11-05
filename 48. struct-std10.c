//WAP to input ID, Name, Marks of 5 students and display the records in appropriate format.
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[50]; // Array to hold records of 50 students
    int i;

    // Input student records
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student records
    printf("\nStudent Records:\n");
    printf("ID\tName\tMarks\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
