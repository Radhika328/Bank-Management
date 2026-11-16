
#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef enum {
    ACCOUNT_ACTIVE,
    ACCOUNT_CLOSED
} AccountStatus;

typedef struct Account {
    int account_number;
    char holder_name[50];
    double balance;
    AccountStatus status;
    struct Account *next;
} Account;

#endif
