//Program to display the sum of series x-x^2+x^3-x^4+...+x^n
#include <stdio.h> 
void main()
{
    int n, i;
    float x, sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // even index terms are positive
            sum -= pow(x, i);
        else // odd index terms are negative
            sum += pow(x, i);
    }
    printf("The sum of the series is: %.2f\n", sum);
}
