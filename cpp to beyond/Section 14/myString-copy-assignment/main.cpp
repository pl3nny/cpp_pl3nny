#include "Mystring.h"

int main()
{
    Mystring a {"Hello"};   // overloaded constructor
    Mystring b;             // no args constructor
    b = a;                  // copy assignment 
    b = "This is a test";   // b.operator=("This is a test");
    return 0;
}