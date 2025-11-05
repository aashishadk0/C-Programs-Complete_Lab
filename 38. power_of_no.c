//C program to find power of a number using user defined function without using recursion.
#include <stdio.h>
int power(int base, int exp);
int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}
int power(int base, int exp) {
    int result = 1, i;
    for (i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
