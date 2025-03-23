#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account: public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

    private:
        static constexpr const char *def_name = "Unnamed Trust Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_int_rate = 0.0;
        static constexpr int def_withdraw_limits_TA = 3;
        static constexpr double def_trust_bonus_TA = 50.0;
        static constexpr double def_trust_withdraw_amount_limit_TA = 500;
    protected:
        int trust_withdraw_limit_TA;
        double trust_bonus_TA;
        double trust_withdraw_amount_limit_TA;

    public:
        Trust_Account( 
            std::string name = def_name,
            double balance = def_balance,
            double int_rate = def_int_rate,
            int withdraw_limit = def_withdraw_limits_TA,
            double bonus = def_trust_bonus_TA,
            double withdraw_amount_limit = def_trust_withdraw_amount_limit_TA
        );
            // end of constructor
        
        // specialized deposit: will check if deposit amount > 5k
        bool deposit (double amount); 

        // specialized withdraw: will check for number of withdraws and cap on withdraws
        bool withdraw(double amount);

        // set up trust withdraw limit
        void limit_withdraw();

};

#endif