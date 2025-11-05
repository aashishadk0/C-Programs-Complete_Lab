//Program to display your name 10 times using for, while and do while loop
#include<stdio.h>
void main()
{
	int i;
	printf("Printing name using for loop\n");
	for(i=0;i<10;i++)
	{
		printf("\nAashish Adhikari.");
	}
	printf("\n\nUsing while loop\n");
	i=0;
	while(i<10)
	{
		printf("\nAashish Adhikari.");
		i++;
	}
	printf("\n\nUsing do while loop");
	i=0;
	do{
		printf("\nAashish Adhikari.");
		i++;
	}while (i<10);
}
