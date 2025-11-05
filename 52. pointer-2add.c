//WAP to calculate sum of two numbers using pointer.
#include <stdio.h>

int main() {
    int a, b, sum, *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &sum;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);

    *p3 = *p1 + *p2;

    printf("Sum: %d\n", *p3);

    return 0;
}
