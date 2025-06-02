// section 9
// while loops

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //int num{};

    // count down
    // cout << "Enter a positive integer - start the countdown: ";
    // cin >> num;

    // while (num > 0)
    // {
    //     cout << num << endl;
    //     --num;
    // }
    // cout << "Blastoff!" << endl;

    // count up
    // cout << "Enter a positive integer - start count up: ";
    // cin >> num;

    // int i{1};

    // while (i <= num)
    // {
    //     cout << i << endl;
    //     ++i;
    // }

    //int number{};

    // input validation
    // cout << "Enter an integer less than 100: ";
    // cin >> number;

    // while (number >= 100)
    // {
    //     cout << "Enter an integer less than 100: ";
    //     cin >> number;
    // }

    // cout << "Thanks" << endl;

    // input validatino using booleans (flags)
    bool done{false};
    int number{0};

    // while (!done)
    // {
    //     cout << "Enter an integer between 1 and 5: ";
    //     cin >> number;

    //     if (number <= 1 || number >= 5)
    //     {
    //         cout << "out of range, try again..." << endl;
    //     }
    //     else
    //     {
    //         cout << "thanks" << endl;
    //         done = true;
    //     }
    // }

    int count{0};
    int index{0};

    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 6, 9, 10};

    while (index < vec.size() && vec.at(index) != -99)
    {

        if (vec.at(index) == -99)
        {
            cout << "-99 found exiting loop" << endl;
        }

        ++index;
        ++count;
    }

    cout << "out of loop counted " << count << " integers in vec" << endl;

    cout << endl;
    return 0;
}