//Program to find the sum of harmonic series i.e. 1 + 1/2 + 1/3 + ... + 1/n
#include <stdio.h>
void main()
{
    int n;
    float f=1, sum=0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        f = 1.0/i; 
        sum += f; 
    }
    printf("\nSum of harmonic series up to %d th term is %.2f", n, sum);
}
