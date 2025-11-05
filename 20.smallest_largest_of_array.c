//WAP to find the smallest and the largest element in an array.
#include <stdio.h>

void main() {
    int arr[5], i, small, large;
    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and largest
    small = large = arr[0];

    // Find smallest and largest
    for(i = 1; i < 5; i++) {
        if(arr[i] < small) {
            small   = arr[i];
        }
        if(arr[i] > large) {
            large = arr[i];
        }
    }

    printf("Smallest element: %d\n", small);
    printf("Largest element: %d\n", large);
}
