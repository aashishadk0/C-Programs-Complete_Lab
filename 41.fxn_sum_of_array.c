//WAP to find sum of all element of array using function.
#include <stdio.h>
int sum(int arr[], int n);
int main() {
    int arr[100], n, i, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    result = sum(arr, n);
    printf("Sum of all elements: %d\n", result);
    return 0;
}
int sum(int arr[], int n) {
    int i, total = 0;
    for (i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}