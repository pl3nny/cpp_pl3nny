#include "Trust_Account.h"

<<<<<<< HEAD
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
=======
Trust_Account::Trust_Account(
    std::string name,
    double balance,
    double int_rate,
    int withdraw_limit,
    double bonus
)   : Savings_Account(name, balance, int_rate),
        trust_withdraw_limit_TA{withdraw_limit}, 
        trust_bonus_TA {bonus} {

    calc_withdraw_limit();
}

bool Trust_Account::deposit(double amount) {
    if(amount > 5000.0){
        balance += (amount + trust_bonus_TA);
        calc_withdraw_limit();
        return true;
    } else {
        balance += amount;
        calc_withdraw_limit();
>>>>>>> ca2c7bc (wip - section 16)
        return false;
    }
}

bool Trust_Account::withdraw(double amount) {
<<<<<<< HEAD
    if(number_of_withdraws < max_num_of_withdraws && amount < (Savings_Account::get_balance() * max_withdraw_percent)) {
        number_of_withdraws++;
        return Savings_Account::withdraw(amount);
    } else {
=======
    if(trust_withdraw_limit_TA > 0 && amount < trust_withdraw_amount_limit_TA) {
        balance -= amount;
        trust_withdraw_limit_TA--;
        calc_withdraw_limit();
        return true;
    } else
>>>>>>> ca2c7bc (wip - section 16)
        return false;
    }
}

<<<<<<< HEAD
double Trust_Account::get_bonus_amount() const {
    return bonus_amount;
=======
void Trust_Account::calc_withdraw_limit() {
    trust_withdraw_limit_TA = balance * 0.2;
>>>>>>> ca2c7bc (wip - section 16)
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", number of withdraws left: " << account.number_of_withdraws << "]";
    return os;
}