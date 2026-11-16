
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

int deposit(Account *account, double amount);
int withdraw(Account *account, double amount);
int transfer(Account *source, Account *destination, double amount);
int close_account(Account *account);

#endif
