
//Program to check whether a number is armstrong or not
#include <stdio.h>
void main()
{
    int i,n,ld, sum = 0, orig;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig = n;
    while (n>0)
    {
        ld = n % 10;
        sum+= ld * ld * ld;
        n /= 10;
    }
    if (sum == orig)
        printf("%d is an Armstrong number.", orig);
    else
        printf("%d is not an Armstrong number.", orig);
}
