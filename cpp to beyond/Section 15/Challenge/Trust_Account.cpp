#include "Trust_Account.h"

Trust_Account::Trust_Account(
    std::string name,
    double balance,
    double int_rate,
    int withdraw_limit,
    double bonus,
    double withdraw_amount_limit
)   : Savings_Account(name, balance, int_rate),
        trust_withdraw_limit_TA{withdraw_limit}, 
        trust_bonus_TA {bonus},
        trust_withdraw_amount_limit_TA {withdraw_amount_limit} {

    limit_withdraw();
}

bool Trust_Account::deposit(double amount) {
    if(amount > 5000.0){
        balance += (amount + trust_bonus_TA);
        limit_withdraw();
        return true;
    } else {
        balance += amount;
        limit_withdraw();
        return false;
    }
}

bool Trust_Account::withdraw(double amount) {
    if(trust_withdraw_limit_TA > 0 && amount < trust_withdraw_amount_limit_TA) {
        balance -= amount;
        trust_withdraw_limit_TA--;
        limit_withdraw();
        return true;
    } else
        return false;
}

void Trust_Account::limit_withdraw() {
    trust_withdraw_limit_TA = balance * 0.2;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", trust withdraw limit: " << account.trust_withdraw_amount_limit_TA << "]";
    return os;
}