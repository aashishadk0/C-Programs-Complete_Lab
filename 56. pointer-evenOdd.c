//WAP to check whether a number is even or odd using pointer.
#include <stdio.h>

int main() {
    int n, *p;
    p = &n;

    printf("Enter an integer: ");
    scanf("%d", p);

    if (*p % 2 == 0) {
        printf("%d is even.\n", *p);
    } else {
        printf("%d is odd.\n", *p);
    }

    return 0;
}
