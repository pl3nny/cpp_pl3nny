/*
Author: pl3nny

    Frank's Carpet Cleaning Service
        $25 per small room
        $35 for large room 
    Sales tax rate is 6%
    Estimate are valid for 30 days

    Promp the user for the number of small and large rooms they would like
    cleaned and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
======================================
Total Estimate: $116.6
This estimate is valid for 30 days
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Frank's Carpet Clearning Service" << endl;

    int number_of_small_rooms {0};
    int number_of_large_rooms {0};

    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> number_of_small_rooms;

    cout << "How many large rooms would like cleaned? ";
    cin >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "NUmber of large rooms: " << number_of_large_rooms << endl;

    const double price_for_small_room {25};
    const double price_for_large_room {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    cout << "Price per small room: $" << price_for_small_room << endl;
    cout << "Price per large room: $" << price_for_large_room << endl;

    double room_cleaning_cost {(number_of_small_rooms * price_for_small_room) + (number_of_large_rooms * price_for_large_room)};
    double taxed_amount {room_cleaning_cost * sales_tax};

    cout << "Cost: $" << room_cleaning_cost << endl;
    cout << "Tax: $" << taxed_amount << endl;
    cout << "=============================================" << endl;

    double total_estimate {room_cleaning_cost + taxed_amount};

    cout << "Total estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << estimate_expiry << endl;
    return 0;
}


