#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
class Checking_Account: public Account 
{
private:
    const double withdrawal_fee{1.5};
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
public:
    bool withdraw(double amount); //Checking has an overridden withdraw method because of the fee
    Checking_Account(std::string name = def_name, double balance = def_balance)
    :Account(name, balance) {};  //initializes base, only difference is the withdraw fee
};

#endif // _CHECKING_ACCOUNT_H_
