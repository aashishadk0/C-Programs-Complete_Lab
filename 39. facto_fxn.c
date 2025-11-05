//WAP to find factorial of a number using function without recursion.
#include <stdio.h>
int factorial(int n);

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num, factorial(num));
    return 0;
}

int factorial(int n) {
    int fact = 1,i;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
