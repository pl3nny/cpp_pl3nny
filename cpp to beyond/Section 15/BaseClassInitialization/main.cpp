#include <iostream>

using namespace std;

class Base {
    private:
        int value;
    public:
        Base() : value {0} {
            cout << "base (no-args) overloaded constructor" << endl;
        }
        Base(int x) : value{x} {
            cout << "Base (int) overlaoded constructor" << endl;
        }
        ~Base(){
            cout << "Base destructor" << endl;
        }
};

class Derived : Base {
    private:
        int doubled_value;
    public:
        Derived() : doubled_value {0} {
            cout << "Derived (no-args) overloaded constructor" << endl;
        }
        Derived(int x) : doubled_value {x * 2} {
            cout << "Derived (int) overloaded constructor" << endl;
        }
        ~Derived(){
            cout << "Derived destructor" << endl;
        }
};

int main() {

    Derived der = Derived{};
    Derived der_2 {1000};

    return 0;
}