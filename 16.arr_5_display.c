//Write a program to Input 5 numbers in an array and display them.
#include <stdio.h>
void main() {
    int arr[5], i;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
	
    // Displaying the numbers
    printf("Numbers you entered are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
}
