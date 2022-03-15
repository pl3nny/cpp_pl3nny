#include <iostream>

using namespace std;

int main()
{

    /*
    For this we'll be using US dollars and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    you may assume that the number of cents entered is greater than or equal to zero

    */

    // const int dollar{100};
    // const int quarter{25};
    // const int dimes{10};
    // const int nickel{5};
    // const int penny{1};

    // int user_amount{0};
    // int num_dollars{}, num_quarters{}, num_dimes{}, num_nickels{}, num_pennies{};

    // cout << endl;
    // cout << "enter an amount in cents: ";
    // cin >> user_amount;

    // num_dollars = user_amount/dollar;
    // user_amount -= num_dollars * dollar;

    // num_quarters = user_amount/quarter;
    // user_amount -= num_quarters * quarter;

    // num_dimes = user_amount/dimes;
    // user_amount -= num_dimes * dimes;

    // num_nickels = user_amount/nickel;
    // user_amount -= num_nickels * nickel;

    // num_pennies = user_amount/penny;
    // user_amount -= num_pennies * penny;

    // cout << "your change is .. " << endl;
    // cout << "dollars: " << num_dollars << endl;
    // cout << "quarters: " << num_quarters << endl;
    // cout << "dimes: " << num_dimes << endl;
    // cout << "nickels: " << num_nickels << endl;
    // cout << "pennies: " << num_pennies << endl;
    // cout << endl;
    // cout << "user_amount: " << user_amount << endl;

    // ******************************************************************************************************

    /*
    THE SWITCH STATEMENT using enum CODING EXCERSISE

    */

    //    enum Direction {

    //        left, right, up, down

    //    };

    //    Direction heading {down};

    //     switch(heading) {
    //         case left:
    //         cout << "going left " << endl;
    //         break;

    //         case right:
    //         cout << "going right" << endl;
    //         break;

    //         case up:
    //         cout << "going up" << endl;
    //         break;

    //         case down:
    //         cout << "going down" << endl;
    //         break;
    //     }

    // ******************************************************************************************************

    // CONDITIONAL OPERATOR

    // (cond_expre) ? expre_1 : expre_2
    // - if cond_expre == true, then expre_1
    // - if cond_expre == false, then expre_2

    // const int score{75};

    // cout << "your test score was " << score << endl;
    // cout << "that's " << ((score > 80) ? "great!" : "bad...") << endl;

    // cout << "another example" << endl;
    // cout << endl;

    // int num1{}, num2{};

    // cout << "enter two numbers separated by a space: ";
    // cin >> num1 >> num2;
    // cout << endl;

    // cout << "largest: " << ((num1 > num2) ? num1 : num2) << endl;
    // cout << "smallest: " << ((num1 < num2) ? num1 : num2) << endl;

    // ******************************************************************************************************


    // RANGE BASED FOR-LOOOP
    // introduced in c++11

    /*
    for (var_type var_name: sequence)
        statement; // can use var_name

    for (var_type var_name: sequence) {
        statements; // can use var_name
    }
    */

    return 0;
}