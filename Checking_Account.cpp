#include "Checking_Account.h"
#include <iostream>
bool Checking_Account::withdraw(double amount) {
    if (((balance - withdrawal_fee) >= 0) && (balance - amount >= 0)) {
        balance -= (withdrawal_fee + amount);
        return true;
    }
        return false; //could not successfully withdraw from account
}


