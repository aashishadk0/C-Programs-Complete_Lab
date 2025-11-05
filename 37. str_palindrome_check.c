//WAP to find whether the string is palindrome or not using string handling functions.
#include <stdio.h>
#include <string.h>

void main() {
    char str[100], rev[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    // Find length of the string
    strcpy(rev, str);
    strrev(rev);

    // Check if original string is equal to reversed string
    if(strcmp(str, rev) == 0) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

}
