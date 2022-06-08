// section 12
// Dynamic Memory

#include <iostream>
#include <array>

using namespace std;

int main() {

    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl; // displays the memory address
    delete int_ptr;

    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;

    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    delete [] temp_ptr;

    return 0;
}