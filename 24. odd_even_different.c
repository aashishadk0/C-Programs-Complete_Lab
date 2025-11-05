//WAP to store the even data and odd data in separate array from the given array.
#include <stdio.h>

void main() {
    int arr[5], i, odd[5], even[5], oddCount = 0, evenCount = 0;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate odd and even numbers
    for(i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            even[evenCount] = arr[i];
            evenCount++;
        } else {
            odd[oddCount] = arr[i];
            oddCount++; 
        }
    }

    // Displaying the results
    printf("Even numbers: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
}
