#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int score{100};
    int *score_ptr{&score};

    cout << "*score_ptr is: " << *score_ptr << endl; // output 100
    
    *score_ptr = 200;

    cout << "*score_ptr is: " << *score_ptr << endl; // output 200
    cout << "score is: " << score << endl; // output 200


    cout << "\n------------------------------" << endl;
    double high_temp {100.7};
    double low_temp{37.4};
    double *temp_ptr {&high_temp};

    cout << *temp_ptr << endl; // 100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;

    cout << "--------------------------------" << endl;

    string name {"pl3nny"};
    string *string_ptr {&name};

    cout << *string_ptr << endl; // pl3nny
    name = "alex";
    cout << *string_ptr << endl;

    cout << "----------------------------------" << endl;

    vector<string> stooges {"larry", "moe", "curly"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl;

    cout << "stooges: ";
    for(auto stooge: *vector_ptr)
        cout << stooge << " ";
    
    cout << endl;

    cout << endl;
    return 0;
}