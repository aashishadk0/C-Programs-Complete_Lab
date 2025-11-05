//Program to calculate the factorial of a number.
#include<stdio.h>
void main()
{
	int n,fact=1,i;
	printf("Enter your number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("%d! = %d\n",n,fact);
}
