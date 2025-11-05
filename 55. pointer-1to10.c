//WAP to print numbers from 1 to 10 using pointer.
#include <stdio.h>

int main() {
    int i, *p;
    p = &i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", *p);
    }

    return 0;
}
