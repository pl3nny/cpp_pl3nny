#include "Account.h"

void Account::set_name(std::string name)
{
    this->name = name;
}

std::string Account::get_name()
{
    return name;
}

void Account::set_balance(double bal)
{
    this->balance = bal;
}

double Account::get_balance()
{
    return balance;
}

bool Account::deposit(double bal)
{
    this->balance += bal;
    return true;
}

bool Account::withdraw(double bal)
{
    if(this->balance - bal >= 0)
    {
        this->balance -= bal;
        return true;
    }

    return false;
}