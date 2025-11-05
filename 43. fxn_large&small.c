#include <stdio.h>

// Function to find largest and smallest elements
void findLargestSmallest(int arr[], int size, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

int main() {
    int arr[100], size, largest, smallest, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findLargestSmallest(arr, size, &largest, &smallest);

    printf("Largest element is: %d\n", largest);
    printf("Smallest element is: %d\n", smallest);

    return 0;
}

