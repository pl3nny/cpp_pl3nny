// Section 16
// The Problem

#include <iostream>

//smart pointer
#include <memory>

class Base {

    public:
        void say_hello() const {
            std::cout << "Hello - I'm Base class object" << std::endl;
        }
};

class Derived: public Base {
    public:
        void say_hello() const {
            std::cout << "Hello - I'm a Derived class object" << std::endl;
        }

};

void greetings(const Base &obj) {
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main() {

// no pointers and virtual methods then we're doing static binding and the objects will call their own methods
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();


    // because of static binding both objects will call the base class 

    greetings(b);
    greetings(b);


    // ptr can hold the address of any Base type object and Derived is a Base
    Base *ptr = new Derived();

    // no virtual function so it will bind that to Base::say_hello() and NOT Derived::say_hello()
    ptr->say_hello();


    // smart pointer
    std::cout << "Smart Pointer example:" << std::endl;
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    // smart pointers delete / take care of themselves
    ptr1->say_hello();


    delete ptr;

    return 0;
}