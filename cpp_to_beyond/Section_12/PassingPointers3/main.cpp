#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

void display(const vector <string> const*v) {
    for(auto str : *v) {
        cout << str << " ";
    }
    cout << endl;
}

int main() {

    vector <string> stooges {"Larry", "Moe", "Curly"};

    display(&stooges);


    return 0;
}
