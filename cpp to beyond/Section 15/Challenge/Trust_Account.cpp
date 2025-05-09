#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account(name, balance, int_rate) {
        number_of_withdraws = 0;
    }

bool Trust_Account::deposit(double amount) {
    if(amount >= bonus_threshold) {
        amount += bonus_amount;
        return Savings_Account::deposit(amount);
    } else { 
        Savings_Account::deposit(amount);
        return false;
    }
}

bool Trust_Account::withdraw(double amount) {
    if(number_of_withdraws < max_num_of_withdraws && amount < (Savings_Account::get_balance() * max_withdraw_percent)) {
        number_of_withdraws++;
        return Savings_Account::withdraw(amount);
    } else {
        return false;
    }
}

double Trust_Account::get_bonus_amount() const {
    return bonus_amount;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", number of withdraws left: " << account.number_of_withdraws << "]";
    return os;
}