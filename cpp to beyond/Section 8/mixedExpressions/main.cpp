// Section 8
// Mixed Type Expressions

/*
   Ask the user to enter 3 integer
   Calculate the sum of the integers then
   calculate the averag of the 3 integers. 

   Display the 3 integers entered
   the sum of the 3 integers and 
   the average of the 3 integers
*/

#include <iostream>

using namespace std;

int main()
{
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;
    // average = (double)tatal/count; old - style (legacy code)

    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the number is: " << total << endl;
    cout << "The average is: " << average << endl;

    cout << endl;
    return 0;
}