#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_input{};
    cout << "Enter anything: ";
    getline(cin, user_input);

    for (size_t i = 0; i < user_input.size(); i++)
    {
        // print out white spaces
        for (size_t j = user_input.size() - 1; j > i; j--)
        {
            cout << " ";
        }

        // print out characters in order
        for (size_t k = 0; k <= i; k++)
        {
            cout << user_input.at(k);
        }

        // print out characters in reverse order - 1
        for (size_t l = i; l > 0; l--)
        {
            cout << user_input.at(l-1);
        }

        cout << endl;
    }

    return 0;
}