//Program to print Fibonacci series up to n terms
#include <stdio.h>
void main()
{
    int n,i,f=0,s=1, temp;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    printf("%d %d", f, s);
    for (i = 1; i <= n; i++)
    {
        temp = f + s;
        f = s;
        s = temp;
        printf(" %d", temp);
    }
}