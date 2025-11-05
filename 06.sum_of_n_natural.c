//Program to display sum of n natural numbers.
#include<stdio.h>
void main()
{
	int i,n, sum=0;
	printf("Enter the last term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("\nSum of natural numbers upto %d is %d",n,sum);
}
