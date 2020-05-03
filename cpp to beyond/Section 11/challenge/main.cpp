/*
    section 11 challenge question
*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void menu_ui();
void print_list(const vector<int> &list);
void add_number_to_list(vector<int> &list);
void display_mean(const vector<int> &list);
void display_smallest_number(const vector<int> &list);
void display_largest_number(const vector<int> &list);
bool find(const vector<int> &list, int target);
void find_number(const vector<int> &list);

int main()
{
    vector<int> list{1, 2, 3, 4, 5};
    char selection{}; // user input
    cout << endl;

    while (selection != 'q' && selection != 'Q')
    {
        menu_ui();
        cin >> selection;

        switch (selection)
        {

        // print list
        case 'P':
        case 'p':
            print_list(list);
            break;

        // add number to list
        case 'A':
        case 'a':
            add_number_to_list(list);
            break;

        // display mean of numbers
        case 'M':
        case 'm':
            display_mean(list);
            break;

        // display the smallest number
        case 'S':
        case 's':
            display_smallest_number(list);
            break;

        // display the largest number
        case 'L':
        case 'l':
            display_largest_number(list);
            break;

        case 'F':
        case 'f':
            find_number(list);
            break;

        // quit program
        case 'Q':
        case 'q':
            cout << "closing program" << endl;
            break;

        // default option if user enters invalid option
        default:
        cout << "\nEnter a valid option...\n"
                 << endl;
            break;
        }
        cout << endl;
    }

    cout << "program terminated" << endl;

    return 0;
}

void menu_ui()
{
    cout
        << "P - Print numbers\n"
        << "A - Add a number\n"
        << "M - Display mean of the numbers\n"
        << "S - Display the smallest number\n"
        << "L - Display the largest number\n"
        << "F - Find number in list\n"
        << "Q - Quit\n\n"
        << "Enter your choice: ";
}

void print_list(const vector<int> &list)
{
    cout << "[ ";
    for (auto &&i : list)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
}

void add_number_to_list(vector<int> &list)
{
    int number{0};
    cout << "input --> ";
    cin >> number;

    list.push_back(number);
    print_list(list);
}

void display_mean(const vector<int> &list)
{
    int mean{0};

    for (auto &&i : list)
    {
        mean += i;
    }

    mean /= list.size();

    cout << "The mean is: " << mean << endl;
}

void display_smallest_number(const vector<int> &list)
{
    int smallest = list.at(0);
    for (auto &&i : list)
    {
        if (smallest > i)
            smallest = i;
    }
    cout << "the smallest number in the list is: " << smallest << endl;
}

void display_largest_number(const vector<int> &list)
{
    int largest = list.at(0);
    for (auto &&i : list)
    {
        if (largest < i)
            largest = i;
    }
    cout << "The largest number in the list is: " << largest << endl;
}

bool find(const vector<int> &list, int target)
{
    for (size_t i = 0; i < list.size(); i++)
    {
        if (target == list.at(i))
            return true;
    }

    return false;
}

void find_number(const vector<int> &list)
{
    int target{0};
    cout << "Enter number to find: " << endl;
    cout << "--> ";
    cin >> target;

    if (find(list, target))
        cout << "number found!" << endl;
    else
        cout << "number not found..." << endl;
}