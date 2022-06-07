#include <iostream>
#include <vector>
#include <string>


using namespace std;

// print number list
void print(vector<int> &vec);

// append number to list
void append_to_list(vector<int> &vec, int num);

// display mean of the numbers
void display_mean(vector<int> &vec);
int get_mean(vector<int> &vec);

// display the smallest number in list
void display_smallest(vector<int> &vec);
int get_smallest(vector<int> &vec);

// displays the largest number in list
void display_largest(vector<int> &vec);
int get_largest(vector<int> &vec);


int main() {

    cout << endl;
    cout << "Author: Alexander Hernandez\n" << endl;

    vector<int> my_vec {2, 5, 8, 10, 15};

    print(my_vec);
    append_to_list(my_vec, 22);

    return 0;
}

void print(vector<int> &vec) {
    for(auto v : vec) {
        cout << v << " ";
    }
    cout << endl;
}

void append_to_list(vector<int> &vec, int num){
    vec.push_back(num);
    cout << num << " added to list..." << endl;
    print(vec);
}

