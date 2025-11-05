// Program to print the pattern of alphabets in 4x4 format
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=4; i++) {
        for(j=1; j<=i; j++) {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
}