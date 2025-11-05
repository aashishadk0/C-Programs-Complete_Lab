//WAP to Calculate simple interest using pointer.
#include <stdio.h>

int main() {
    float p, r, t, *p1, *p2, *p3, *p4, i;

    p1 = &p;
    p2 = &r;
    p3 = &t;
    p4 = &i;

    printf("Enter Principal Amount: ");
    scanf("%f", p1);
    printf("Enter Rate of Interest: ");
    scanf("%f", p2);
    printf("Enter Time (in years): ");
    scanf("%f", p3);

    *p4 = (*p1 * *p2 * *p3) / 100;

    printf("Simple Interest: %.2f\n", *p4);

    return 0;
}
