#include "Checkings_Account.h"

Checkings_Account::Checkings_Account(std::string name, double balance, double fee)
    : Account(name, balance), withdraw_fee (fee) {}

bool Checkings_Account::withdraw(double amount) {
    if(amount + withdraw_fee > balance) {
        return false;
    } else {
        balance -= (amount + withdraw_fee);
        return true;
    }
}

std::ostream &operator<<(std::ostream &os, const Checkings_Account &account) {
    os << "[Checkings_Account: " << account.name << ": " << account.balance << ", fee: " << account.withdraw_fee << "]";
    return os;
}