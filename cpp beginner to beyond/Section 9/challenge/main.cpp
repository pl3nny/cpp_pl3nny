/*
    Author: pl3nny
    Section 9 challenge question
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    char selection{};
    vector<int> vec{2, 4, 5, 1};
    int user_input{0};
    int average{0};
    int smallest_int{INT_MAX};
    int largest_int{INT_MIN};

    while (selection != 'q' && selection != 'Q')
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "input -> ";
        cin >> selection;
        cout << endl;

        switch (selection)
        {
        case 'p': // print list
        case 'P':
            if (vec.empty())
            {
                cout << "[] - the list is empty" << endl;
            }
            else
            {
                cout << "[ ";
                for (auto &&val : vec)
                {
                    cout << val << " ";
                }
                cout << "]";
            }
            cout << endl;
            break;

        case 'a': // add int to list
        case 'A':
            cout << "Enter number to add to list: ";
            cin >> user_input;
            vec.push_back(user_input);
            cout << user_input << " added" << endl;
            break;

        case 'm': // get mean / average of list
        case 'M':
            if (vec.empty())
            {
                cout << "unable to calculate the mean - no data" << endl;
            }
            else
            {
                for (auto &&val : vec)
                {
                    average += val;
                }
                average /= vec.size();
            }
            cout << "Average is " << average << endl;
            break;

        case 's': // get smallest int
        case 'S':
            for (auto &&val : vec)
            {
                if (smallest_int > val)
                {
                    smallest_int = val;
                }
            }

            cout << "The smallest number is " << smallest_int << endl;

            break;

        case 'l':
        case 'L':
            for (auto &&val : vec)
            {
                if (largest_int < val)
                {
                    largest_int = val;
                }
            }

            cout << "The largest number is " << largest_int << endl;
            break;
        case 'q':
        case 'Q':
            cout << "Goodbye" << endl;
            break;

        default:
            cout << "Unknown selection, please try again" << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}