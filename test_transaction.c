
#include <stdio.h>
#include "transaction.h"

int main(void)
{
    Account account1 = {
        101, "Radhika", 10000.00, ACCOUNT_ACTIVE, NULL
    };

    Account account2 = {
        102, "Gouramma", 5000.00, ACCOUNT_ACTIVE, NULL
    };

    printf("Initial Balance: %.2f\n", account1.balance);

    // Test deposit
    if (deposit(&account1, 2000))
        printf("Deposit successful\n");

    printf("Balance: %.2f\n\n", account1.balance);

    // Test withdrawal
    if (withdraw(&account1, 1000))
        printf("Withdrawal successful\n");

    printf("Balance: %.2f\n\n", account1.balance);

    // Test transfer
    if (transfer(&account1, &account2, 3000))
        printf("Transfer successful\n");

    printf("Radhika Balance: %.2f\n", account1.balance);
    printf("Gouramma Balance: %.2f\n\n", account2.balance);

    // Test closing account
    if (close_account(&account1))
        printf("Account closed successfully\n");

    printf("Account Status: %s\n",
        account1.status == ACCOUNT_CLOSED ? "CLOSED" : "ACTIVE");

    // Test invalid transaction
    if (!deposit(&account1, 500))
        printf("Deposit rejected because account is closed\n");

    return 0;
}
