//WAP to search a data in an Array.
#include <stdio.h>
void main() {
    int arr[5], i, search, found = 0;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to search
    printf("Enter number to search: ");
    scanf("%d", &search);

    // Search for the number
    for(i = 0; i < 5; i++) {
        if(arr[i] == search) {
            found = 1;
            break;
        }
    }

    // Display result
    if(found==1) {
        printf("%d is at position %d.\n", search, i + 1);
    } else {
        printf("%d is not in the array.\n", search);
    }
}
