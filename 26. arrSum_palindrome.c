//Program to find whether the sum of number of an array is palindrome or not.
#include <stdio.h>

int main() {
    int arr[5], i, sum = 0, temp, rem, rev = 0;
    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Check if sum is palindrome
    temp = sum;
    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if(sum == rev) {
        printf("The sum %d is a palindrome.\n", sum);
    } else {
        printf("The sum %d is not a palindrome.\n", sum);
    }

    return 0;
}
