/*
    Franks carpet cleaning service
    charges $30 per room
    sales tax rate is 6%
    estimates are valid for 30 days

    prompt the user for the number of rooms they
    would like cleaned and provide an estimate such as

Estimate for carpet clearning service: 
NUmber of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
=============================================
Total estimate: $63.6
This estimate is valid for 30 days
*/


#include <iostream> 

using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Clearning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30};
    const double sales_tax {.06};
    const int estimate_expiry {30};

    cout << "Estimate for caprte cleaning service: " << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;

    double room_cleaning_cost {(double)number_of_rooms * price_per_room};

    cout << "Cost: $" << room_cleaning_cost << endl;

    double taxed_amount {(room_cleaning_cost) * sales_tax };

    cout << "Tax: $" << taxed_amount << endl;
    cout << "===================================" << endl;

    double total_estimate {room_cleaning_cost + taxed_amount};

    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}