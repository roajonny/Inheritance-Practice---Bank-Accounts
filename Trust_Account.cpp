#include "Trust_Account.h"
bool Trust_Account::deposit(double amount) {
    if (amount > 0) {
        Savings_Account::deposit(amount); //deposit if > 0
        balance += (balance * int_rate/100);
        return true;
        if (amount > 5000) {      //add 50 to balance if amount > 5000
        balance += 50;
        }
    }
    return false; 
}
bool Trust_Account::withdraw(double amount) {
    if (withdraw_lim == 0)
        return false;
    if (amount < (balance * (withdraw_ceiling/100))) {
        Savings_Account::withdraw(amount);
        withdraw_lim--;
        return true;
    }
    return false;
}

