

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

int deposit(Account *bank_account, double deposit_amount);
int withdraw(Account *bank_account, double withdrawal_amount);
int transfer(Account *source_account, Account *destination_account, double transfer_amount);

#endif

