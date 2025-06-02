#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value(int num) {
    num = 100;
}

void pass_by_value_2(string s) {
    s = "Changed";
}

void pass_by_value_3(vector<string> v){
    v.clear(); // delete all vector elements
}

void print_vector(vector<string> v){
    for(auto s:v) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {

    int num {10};
    int another_num {20};

    


    return 0;
}