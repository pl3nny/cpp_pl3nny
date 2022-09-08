#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int *create_array(size_t size, int initial_value) {

    int *new_storage {nullptr};

    new_storage = new int[size];

    for (int i = 0; i < size; i++) {
        *(new_storage + i) = initial_value;
    }
    return new_storage;
}

void display (const int *const array, size_t size) {

    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {

    int *my_array {nullptr};
    size_t size;
    int initial_value {0};

    cout << endl;
    cout << "How many integers would you like to allocate? ";
    cin >> size;

    cout << endl;

    cout << "What value would you them initialized to? ";
    cin >> initial_value;

    my_array = create_array(size, initial_value);

    cout << "\n-----------------------------" << endl;
    cout << endl;

    display(my_array, size);
    cout << endl;

    delete [] my_array;



    return 0;
}