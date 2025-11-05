//Menu driven program to perform arithmetic operatioins.
#include<stdio.h>
void main()
{
	char ch;
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("'+' for addition\n'-' for subtraction\n'*' for multiplication\n'%' for remainder\n'/' for division");
	printf("\nEnter your choice: ");
	scanf(" %c",&ch);
	switch (ch)
	{	
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("\n%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("\n%d x %d = %d",a,b,a*b);
			break;
		case '%':
			printf("\n%d MOD %d = %d",a,b,a%b);
			break;
		case '/':
			printf("\n%.2f / %.2f = %.2f", (float) a,(float) b,(float)a/b);
			break;
		default:
			printf("\nInvalid choice");
	}
}
