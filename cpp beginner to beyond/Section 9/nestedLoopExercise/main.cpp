// sectioon 9
// nested loop exercise

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{2};

    int result{};

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec.size() == 0)
            return 0;

        for (int j = 0; j < i; j++)
        {
            result += vec.at(i) * vec.at(j);
        }
    }

    cout << "Sum of the product of all pairs: " << result << endl;

    return 0;
}