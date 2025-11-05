//WAP to sort the name of students in alphabetical order.
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][30]; // Array to hold names
    int i, j;
    char temp[30]; // Temporary variable for swapping

    // Input student names
    printf("Enter the names of the students: ");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    // Sort names using bubble sort
    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
