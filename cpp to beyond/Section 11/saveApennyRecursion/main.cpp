/*
    Section 11 
    Recursion

    Author: pl3nny
*/
#include <iostream>
#include <iomanip>

using namespace std;

int function_activation_count{0};

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPE BELOW THIS LINE----

double a_penny_doubled_everyday(int days, double amount = 0.01); //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void amount_accumulated();

int main()
{

    amount_accumulated();

    return 0;
}

void amount_accumulated()
{

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALL BELOW THIS LINE----

    int days {30};

    double total_amount = a_penny_doubled_everyday(days);

    //----WRITE THE FUNCTION CALL ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << endl;
    cout << "If I start with a penny and doubled it every day for " << days << " days, I will have $" << setprecision(10)
         << total_amount << endl;
    cout << endl;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

double a_penny_doubled_everyday(int days, double amount)
{ //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    function_activation_count++;
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----

    cout << "***********************" << endl;
    cout << "Day: " << days << endl;

    if(days <= 1)
        return amount;

    return a_penny_doubled_everyday(days - 1, amount * 2);

    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //DO NOT MODIFY THE CODE BELOW THIS LINE----
}