// Section 15
// Contructors and Destructors
#include <iostream>

using namespace std;

class Base {
    private:
        int value;
    public:
        Base() {cout << "Base no-args constructor" << endl;}
        Base(int x) : value{0} {cout << "Base(int) overloaded constructor" << endl;}
        ~Base() {cout << "base destructor" << endl;}
};

class Derived : public Base {
    using Base::Base;
    private:
        int doubled_value;
    public:
        Derived() : doubled_value{0} {cout << "Derived no-args constructor " << endl;}
        Derived(int x) : doubled_value {x*2} {cout << "Derived(int) overloaded constructor" << endl;}
        ~Derived() {cout << "Derived destructor" << endl;}
};

int main() { 
    // Base b;
    // Base b {100};
    // Derived d;
    Derived d {1000};
   
   return 0;
}