// Section 15
// Protected members and class access
#include <iostream>

using namespace std;

class Base {
    // Note friends of base have access to all
    public:
        int a{0};
        void display() {std::cout << a << ", " << b << ", " << c << std::endl;} // member method has acess to all
    protected:
        int b{0};
    private:
        int c{0};
};

class Derived: public Base {
  // Note friends of Derived have access to only what Derived has access to

  // a will be public
  // b will be protected
  // c will not be accessible

  public:
    void access_base_members() {
      a = 100; // ok
      b = 200; // ok
      // c = 300;
    }
};

  int main() {
    cout << "=== Base member access from base objects =============" << endl;
    Base base;
    base.a = 100;
    // base.b == 200; // compiler error because data is protected; objects that are protected or private will produce compiler errors
    // base.c == 300; // compiler error because data is private

    cout << "=== Base member access from derived objects =============" << endl;
    Derived d;
    d.a = 100;
    // d.b = 200;
    //d.c = 300;
    return 0;
  }