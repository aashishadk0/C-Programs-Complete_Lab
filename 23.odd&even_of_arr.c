//WAP to find total Number of odd Data and Even data in an Array.
#include <stdio.h>
void main() {
    int arr[5], i, oddCount = 0, evenCount = 0;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Count odd and even numbers
    for(i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
 
    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);
}