/*
    section 11 challenge question
*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void menu_UI();

int main()
{
    menu_UI();

    return 0;
}

void menu_UI()
{
    cout
        << "P - Print numbers\n"
        << "A - Add a number\n"
        << "M - Display meanof the numbers\n"
        << "S - Display the smallest number\n"
        << "L - Display the largest number\n"
        << "Q - Quit\n\n"
        << "Enter your choice: ";
}