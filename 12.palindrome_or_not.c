//Program to check whether a number is a palindrome or not
#include <stdio.h>
void main()
{
    int n, reverse, original, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n>0){
        rem= n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    if(original == reverse)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);
}
