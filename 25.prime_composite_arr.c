//Program to find whether the number in array are prime or composite without using function.
#include <stdio.h>

void main() {
    int arr[5], i, j, isPrime, primecount = 0, ccount = 0;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each number
    for(i = 0; i < 5; i++) {
        if (arr[i] <= 1) {
            printf("%d is not a prime number.\n", arr[i]);
            continue;
        }
        isPrime = 1;
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            primecount++;
        } else {
            ccount++;
        }
    }
    printf("Total prime numbers: %d\n", primecount);
    printf("Total composite numbers: %d\n", ccount);
}
