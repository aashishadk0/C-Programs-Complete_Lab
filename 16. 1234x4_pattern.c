// Program to print the pattern of numbers in 4x4 format
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=4; i++) {
        for(j=1; j<=4; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}