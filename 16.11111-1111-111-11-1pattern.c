// Program to print the pattern of numbers in 5x5 format
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=5; i++) {
        for(j=5; j>=i; j--) {
            printf("1 ");
        }
        printf("\n");
    }
}
