// Section 8
// Logical Operators

#include <iostream>

using namespace std;

int main()
{
    int num{10};
    const int lower{10};
    const int upper{20};

    cout << boolalpha;

    // Determina if an entered integer is between two other integers
    // assume lower < upper

    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;

    bool within_bounds{false};

    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

    // Determine if an integer is outisde two ther integers
    // assume lower < upper

    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;

    bool outside_bounds = (num < lower || num > upper);
    cout << num << "is outside " << lower << " and " << upper << " : " << outside_bounds << endl;
    return 0;
}