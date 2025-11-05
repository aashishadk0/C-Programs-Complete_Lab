//WAP that accepts the price and stock of five different bulbs, calculate total stock value.
#include <stdio.h>

void main() {
    float price[5], tStock = 0;
    int stock[5], i;

    // Input price and stock for 5 bulbs
    for(i = 0; i < 5; i++) {
        printf("Enter price and stock for bulb %d: ", i + 1);
        scanf("%f %d", &price[i], &stock[i]);
    }

    // Calculate total stock value
    for(i = 0; i < 5; i++) {
        tStock += price[i] * stock[i];
    }

    printf("Total stock value of bulbs: %.2f\n", tStock);
}
