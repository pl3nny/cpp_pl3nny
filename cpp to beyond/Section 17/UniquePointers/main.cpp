// Section 17
// Unique Pointers 
#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};

using namespace std;

int main() {

    // Test t1 {1000};
    // Test *t2 = new Test(2000);

    // std::unique_ptr<Test> t3 {new Test{3000}};

    // std::unique_ptr<Test> t4 = std::make_unique<Test>(4000);

    // std::unique_ptr<Test> t5;

    // // can't copy unique_ptrs but you can move uniqute_ptrs
    // // t1 and t2 are not unique_ptrs
    // t5 = std::move(t3);

    // // if t3 is a nullptr
    // // t3 is a nullptr since we moved the object to t5
    // if(!t3) {
    //     std::cout << "t3 is a nullptr" << std::endl;
    // }

    // delete t2;


    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);

    std::cout << *a1 << std::endl;

    a1->deposit(5000);
    std::cout << *a1 << std::endl;
    cout << endl;

    std::vector<std::unique_ptr<Account>> accounts;

    accounts.push_back(std::make_unique<Checking_Account>("James", 1000));
    accounts.push_back(std::make_unique<Savings_Account>("Billy", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust_Account>("Bobby", 5000, 4.5));

    // can't use regular acc without & since we can't copy smart pointers. Must use reference &acc
    for(const auto &acc:accounts) {
        std::cout << *acc << std::endl;
    }

    return 0;
}

