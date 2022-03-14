#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector <int> test_scores {100, 98, 89};

    for(int i = 0;i < test_scores.size(); i++) {
        cout << "the tests scores are :" << test_scores.at(i) << endl;
    }

    cout << "Add score: ";
    int user_input = 0;
    cin >> user_input;
    test_scores.push_back(user_input);

    for(int i = 0;i < test_scores.size(); i++) {
        cout << "the tests scores are :" << test_scores.at(i) << endl;
    }   

    return 0;
}