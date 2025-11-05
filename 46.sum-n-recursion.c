//WAP to find sum of N natural Number using recursion.
#include <stdio.h>

int sumNatural(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumNatural(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Sum is not defined for negative numbers.\n");
    } else {
        printf("Sum of first %d natural numbers is: %d\n", num, sumNatural(num));
    }

    return 0;
}
