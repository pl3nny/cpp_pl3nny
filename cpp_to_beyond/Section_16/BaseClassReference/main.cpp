#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
};

class Checking: public Account 
{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
};


class Savings: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
};

class Trust: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);
}

int main() {

    Account a;
    Account &ref = a;
    ref.withdraw(1000);     // in Account::withdraw

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);   // in Trust::withdraw

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 100);
    do_withdraw(a2, 100);
    do_withdraw(a3, 100);
    do_withdraw(a4, 100);


    return 0;
}