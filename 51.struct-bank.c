//Create a structure of bank customer with attribute id, name, acc. no ,balance of n customers and display acc.no and balance.
#include <stdio.h>

struct BankCustomer {
    int id;
    char name[50];
    int acc_no;
    float balance;
};

int main() {
    struct BankCustomer customers[100];
    int n, i;

    printf("Enter the number of customers: ");
    scanf("%d", &n);

    // Input customer details
    for (i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &customers[i].id);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Account No: ");
        scanf("%d", &customers[i].acc_no);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Display account numbers and balances
    printf("\nAccount Details:\n");
    printf("Acc. No\tBalance\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%.2f\n", customers[i].acc_no, customers[i].balance);
    }

    return 0;
}
