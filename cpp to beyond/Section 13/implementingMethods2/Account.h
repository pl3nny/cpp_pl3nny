#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account
{
    private:
    std::string name;
    double balance;

    public:
    void set_name(std::string name);
    std::string get_name();

    void set_balance(double bal);
    double get_balance();

    bool deposit(double bal);
    bool withdraw(double bal);
};

#endif