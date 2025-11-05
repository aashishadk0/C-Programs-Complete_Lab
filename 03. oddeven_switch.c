/*Menu driven program to calculate whether the odd or even. Number is divisible by 5and 7,
number is divisible by 5 or 7.*/
#include<stdio.h>
void main()
{
	int ch,n;
	printf("Enter your number: ");
	scanf("%d",&n);
	printf("\nChoose '1' to check odd or even\nChoose '2' to check divisible by 5 and 7 or not\nchoose '3' to check divisible by 5 or 7 or not");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
			if(n%2==0){
				printf("%d is even",n);
			}
			else{
				printf("%d is odd.",n);
			}
			break;
			
		case 2:
			if(n%5==0 && n%7==0){
				printf("%d is divisible by 5 and 7",n);
			}
			else{
				printf("%d is not divisible by 5 and 7",n);
			}
			break;
		
		case 3:
			if(n%5==0 || n%7==0){
				printf("%d is divisible by 5 or 7",n);
			}
			else{
				printf("%d is not divisible by 5 or 7",n);
			}
			break;
		default:
			printf("Invalid choice");
		
	}
}
