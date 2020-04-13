// section 9
// do while loops

#include <iostream>

using namespace std;

int main()
{
    char selection{};
    do
    {
        cout << "\n------------------------" << endl;
        cout << "1. a little bit of this..." << endl;
        cout << "2. a little bit of that..." << endl;
        cout << "4. Q. Quit" << endl;
        cout << "\nEnter selection: ";
        cin >> selection;

        if (selection == '1')
            cout << "You chose 1 - a little bit of this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - a little bit of that" << endl;
        else if (selection == 'q' || selection == 'Q')
            cout << "Good bye..." << endl;
        else
            cout << "unknown option -- try again ... " << endl;
    } while (selection != 'q' && selection != 'Q');

    return 0;
}