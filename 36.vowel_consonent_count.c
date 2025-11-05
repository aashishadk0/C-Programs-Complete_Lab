//WAP to find the number vowels consonant and space in the string.
#include <stdio.h>
#include <string.h>

void main() {
    char str[100],ch;
    int vow = 0, con = 0, spaces = 0, i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if(ch == ' ') {
            spaces++;
        } else if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;  // Convert to lowercase
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vow++;
            } else {
                con++;
            }
        } else if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vow++;
            } else {
                con++;
            }
        }
    }

    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", con);
    printf("Spaces: %d\n", spaces);

}
