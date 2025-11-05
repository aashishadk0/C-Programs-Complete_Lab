//Program to print the pattern of stars in 4x5 format
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=4; i++) {
        for(j=1; j<=5; j++) {
            printf("* ");
        }
        printf("\n");
    }
} 
