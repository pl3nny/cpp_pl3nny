#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

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

    // Section 9

    // RANGE BASED FOR-LOOOP
    // introduced in c++11

    /*
    for (var_type var_name: sequence)
        statement; // can use var_name

    for (var_type var_name: sequence) {
        statements; // can use var_name
    }
    */

    //    cout << endl;
    //    cout << "\tRange Based For-Loop\n" << endl;

    //     int arr [] {1,2,3,4,5,6,7,8,9,10};

    //     int scores [] {100, 90, 97};

    //     for (auto score : scores) {
    //         cout << score << endl;
    //     }

    // calculate the average temperature in the vector

    // cout << endl;
    // cout << "Temperature" << endl;
    // cout << endl;

    // vector<double> temps {87.2, 77.1, 80.0, 72.5};

    // for(auto temp : temps) {
    //     cout << temp << endl;
    // }

    // vector<double> temperature {87.9,77.9,80.0,72.5};
    // double average_temperature {};
    // double total{};

    // for(auto temp : temperature){
    //     cout << temp << " ";
    //     total += temp;
    // }

    // cout << endl;

    // if(temperature.size() != 0){
    //     average_temperature = total / temperature.size();
    // }

    // cout << fixed << setprecision(1);
    // cout << "The average temperature is: " << average_temperature << endl;

    // double temp_high {100.78};
    // double temp_low {98.7878};

    // double adds_low_high = temp_high + temp_low;

    // cout << adds_low_high << endl;

    // cout << "setprecision by 2 " << fixed << setprecision(2) << adds_low_high << endl;

    // cout << "setprecision by 1 " << fixed << setprecision(1) << adds_low_high << endl;

    // ******************************************************************************************************

    // NESTED LOOPS

    // cout << "multiplacation table\n" << endl;
    // cout << endl;

    // for (int i {1}; i <= 10; i++) {
    //     for (int j {1}; j <= 10; j++) {
    //         cout << i << " * " << j << " = " << i * j << endl;

    //         if (j == 10) {
    //         cout << "------------" << endl;
    //         }
    //     }
    // }

    // two dimensional arrays with nested loops

    //    vector <vector <int>> vector_2d
    //    {
    //        {1,2,3},
    //        {10,20,30,40},
    //        {100,200,300,400,500}
    //    };

    //    for(auto vec:vector_2d){
    //        for(auto val:vec) {
    //            cout << val << " ";
    //        }
    //        cout << endl;
    //    }

    //    // get and store  value of user inputs

    //    int num_items{};

    //    cout << "how many data item do you have? ";
    //    cin >> num_items;

    //    vector <int> data{};
    //    int input{};

    //    for(int i = 0; i < num_items; i++) {
    //        cout << "Enter value: ";
    //        cin >> input;
    //        data.push_back(input);
    //    }

    //    cout << "\nDisplayig Histogram" << endl;

    //    for(auto val:data){
    //        for(int i = 1; i <= val; i++) {
    //            cout << "-";
    //            if (i % 5 == 0) {
    //                cout << "*";
    //            }
    //        }
    //        cout << endl;
    //    }

    /*
        SECTION 9 CHALLENGE
    */

    struct Menu
    {
        void printMenu()
        {
            cout << "P - Pring numbers\n"
                    "A - Add a number\n"
                    "M - Display mean of the numbers \n"
                    "S - Display the smallest number\n"
                    "L - Display the largest number\n"
                    "Q - Quit"
                 << endl;
        }
    };

    Menu menu;
    char selection;
    vector<int> vec_list;
    int input{};
    int mean{};
    int smallest{};
    int largest{};

    menu.printMenu();

    cout << "Enter your choice: ";
    cin >> selection;

    while (selection != 'q')
    {
        if (islower(selection))
        {
            selection = toupper(selection);
        }

        switch (selection)
        {
        case 'P':
            if (vec_list.empty())
            {
                cout << "list is empty" << endl;
            }
            else
            {
                cout << "Printing number: " << endl;
                for (auto vec : vec_list)
                {
                    cout << vec << " ";
                }
                cout << endl;
            }
            break;
        case 'A':
            cout << "enter integer to add to list: ";
            cin >> input;
            cout << "Adding number: " << input << endl;
            vec_list.push_back(input);
            break;
        case 'M':
            cout << "Calculating mean of the numbers" << endl;
            for (auto vec : vec_list)
            {
                mean += vec;
            }
            mean /= vec_list.size();
            cout << "mean = " << mean << endl;
            break;
        case 'S':
            cout << "Displaying the smallest number" << endl;
            if (vec_list.empty())
            {
                cout << "list is empty, add integers first..." << endl;
            }
            else
            {
                smallest = vec_list.at(0);
                for (auto vec : vec_list)
                {
                    if (vec < smallest)
                    {
                        smallest = vec;
                    }
                }
                cout << "smallest: " << smallest << endl;
            }
            break;
        case 'L':
            cout << "Displaying the largest number" << endl;
            if (vec_list.empty())
            {
                cout << "list is empty, add integers first..." << endl;
            }
            else
            {
                largest = vec_list.at(0);
                for (auto vec : vec_list)
                {
                    if (vec > largest)
                    {
                        largest = vec;
                    }
                }
                cout << "largest: " << largest << endl;
            }
            break;
        }

        cout << endl;

        menu.printMenu();
        cout << "Enter your choice: ";
        cin >> selection;
        cout << endl;
    }

    cout << "Quitting program" << endl;

    return 0;
}