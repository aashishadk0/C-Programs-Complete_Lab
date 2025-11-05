//WAP to sort data in an array.
#include <stdio.h>

void main() {
    int arr[5], i, j, temp;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array (Bubble Sort)
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Displaying the sorted array
    printf("Sorted array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
}
