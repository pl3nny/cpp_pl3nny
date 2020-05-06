#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << endl;

    int num{100};
    int &ref{num};

    cout << num << endl;
    cout << ref << endl;

    cout << "\n--------------------------\n"
         << endl;

    num = 200;

    cout << num << endl;
    cout << ref << endl;

    cout << "\n--------------------------\n"
         << endl;

    ref = 300;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n--------------------------\n"
         << endl;

    vector<string> stooges{"larry", "moe", "curly"};

    for (auto str : stooges)
    {
        str = "funny"; // str is a copy of each vector element
    }

    for (auto str : stooges) // no change to stooges vector
        cout << str << endl;

    cout << "\n--------------------------\n"
         << endl;

    for(auto &str:stooges)  // str is a reference to each vector element
        str = "funny";

    for(auto const &str:stooges)
        cout << str << endl;

    cout << endl;
    return 0;
}