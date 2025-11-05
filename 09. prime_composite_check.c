//Program to check whether the number is prime or composite.
#include<stdio.h>
void main()
{
	int n,flag=0,i;
	printf("Enter your number: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0){
			flag++;
			printf("%d is Composite number.",n);
			break;
		}
	}
	if(flag==0){
		printf("%d is Prime number.",n);
	}
}
