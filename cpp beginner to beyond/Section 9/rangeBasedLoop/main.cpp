// Section 9
// Range based for loop

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int scores[]{10, 20, 30};

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

    // for (auto c : "This is a test")
    // {
    //     if (c != ' ')
    //         cout << c;
    // }

    // for (auto c : "This is a test")
    //     if (c == ' ')
    //         cout << "\t";
    //     else
    //         cout << c;

    // excercise
    vector<int> vec{1, 3, 5, 15, 16, 17, 18, 19, 20, 21, 25, 26, 27, 30, 50,
                    55, 56, 58, 100, 200, 300, 400, 500, 600, 700};

    int count{0};
    for (auto num : vec)
        if (num % 3 == 0 || num % 5 == 0)
            ++count;

    cout << "There are " << count << " numbers in vec divisible by 3 and 5" << endl;

    cout << endl;
    return 0;
}