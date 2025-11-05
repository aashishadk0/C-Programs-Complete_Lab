//Programt to find wheteher the number is even or odd using bitwise operator.
#include <stdio.h>
int evenodd(int num);

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    evenodd(num);
    return 0;
}

int evenodd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}
