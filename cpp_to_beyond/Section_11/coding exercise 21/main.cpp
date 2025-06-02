/*
* Coding exercise 21: Using Functions from the cmath Library
*/


#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double bill_total {102.78};
    int number_of_guests {5};

    // ********************************

    double individual_bill {bill_total / double(number_of_guests)};

    cout << "individual bill not rounded: " << individual_bill << endl;
    cout << endl;

    // At location 1 - rounds down to nearest dollar
    double individual_bill_1 {floor(individual_bill)};
    cout << "rounded down to nearest dollar: " << individual_bill_1 << endl;
    cout << endl;

    // At location 2 - rounds to the nearest dollar
    double individual_bill_2 {round(individual_bill)};
    cout << "rounded to the nearest dollar: " << individual_bill_2 << endl;
    cout << endl;

    // At location 3 - rounds up to the neares cent.
    double individual_bill_3 {ceil((individual_bill * 100.00)) / 100.00};
    cout << "rounded to the nearest cent: " << individual_bill_3 << endl;
    cout << endl;

    return 0;
}