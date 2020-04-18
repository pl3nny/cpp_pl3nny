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

        for (size_t j = 0; j <= i; j++)
        {
            cout << user_input.at(j);
        }
        cout << endl;
    }
    
    

    return 0;
}