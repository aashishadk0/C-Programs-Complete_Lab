//WAP To find the sum of average and percentage of the subject marks of students using Array.
#include <stdio.h>

void main() {
    int marks[5], i, sum = 0;
    float average, percentage;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate average and percentage
    average = sum / 5.0;
    percentage = (sum / 500.0) * 100;

    // Display results
    printf("Sum of marks: %d\n", sum);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
}

