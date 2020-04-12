#include <iostream>

using namespace std;

int main()
{
    const int one_dollar_in_cents{100};
    const int one_quarter_in_cents{25};
    const int one_dime_in_cents{10};
    const int one_nickel_in_cents{5};
    const int one_penny_in_cents{1};

    int user_amount{0};
    cout << "Enter an amount in cents: ";
    cin >> user_amount;

    cout << "You can provice change for this change as follow: " << endl;

    int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = user_amount / one_dollar_in_cents;
    cout << "dollars: " << dollars << endl;

    user_amount %= one_dollar_in_cents;

    quarters = user_amount / one_quarter_in_cents;
    cout << "quarters: " << quarters << endl;

    user_amount %= one_quarter_in_cents;

    dimes = user_amount / one_dime_in_cents;
    cout << "dimes: " << dimes << endl;

    user_amount %= one_dime_in_cents;

    nickels = user_amount / one_nickel_in_cents;
    cout << "nickels: " << nickels << endl;

    user_amount %= one_nickel_in_cents;

    cout << "pennies: " << user_amount << endl;

    return 0;
}