//Write a program to find sum of the numbers stored in array.
#include <stdio.h>

void main() {
    int arr[5], i, sum = 0;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum
    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of the numbers is: %d\n", sum);
}
