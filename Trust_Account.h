#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account: public Savings_Account
{
private: 
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    const double withdraw_ceiling {20}; 
    char withdraw_lim {3};
public:
    bool deposit(double amount);
    bool withdraw(double amount); 
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate)
    :Savings_Account(name, balance, int_rate) {};

};

#endif // _TRUST_ACCOUNT_H_
