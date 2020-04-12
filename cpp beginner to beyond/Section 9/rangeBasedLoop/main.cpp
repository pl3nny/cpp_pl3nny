// Section 9
// Range based for loop

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int scores[] {10, 20, 30};

    // for(int score:scores)
    // {
    //     cout << score << endl;
    // }

    // for (auto score : scores)
    // {
    //     cout << score << endl;
    // }

    // vector<double> temperatures {87.9,77.9,80.0,72.5};
    // double average_temp{};
    // double total{};
    
    // for(auto temp: temperatures)
    // {
    //     total += temp;
    // }

    // if(temperatures.size() != 0)
    // {
    //     average_temp = total / temperatures.size();
    // }

    // cout << fixed << setprecision(1); // one number after the decimal point
    // cout << "Average temperature is " << average_temp << endl;

    // for (auto val : {1,2,3,4,5})
    // {
    //     cout << val << endl;
    // }
    
    // C - style string

    for(auto c: "This is a test")
    {
        if(c != ' ')
            cout << c;
    }

    cout << endl;
    return 0;
}