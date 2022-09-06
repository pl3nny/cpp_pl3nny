#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {

    cout << "Passing Pointers\n" << endl;

    int *int_ptr1 {nullptr}, *int_ptr2 {nullptr};

    int value = 10;

    cout << int_ptr1 << endl;
    int_ptr1 = &value;
    cout << *int_ptr1 << endl;

    return 0;
}