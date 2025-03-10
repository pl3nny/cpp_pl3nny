#include <iostream>
#include "Account.h"


Account::Account() 
    : balance {0}, name {"an_account"} {}
Account::~Account() {};

void Account::deposit(double amount) {
    std::cout << "Account deposit is being called " << amount << std::endl;
}

void Account::withdraw(double amount) {
    std::cout << "Account withdraw is being called " << amount << std::endl;
}