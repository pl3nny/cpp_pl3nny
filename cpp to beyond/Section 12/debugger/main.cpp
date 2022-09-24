// Section 12
// Debugger

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int i{5};

    while(i > 0) {
        cout << i << " ";
        i--;
    }

    cout << endl;
    int x{100}, y{200};
    cout << "\nx: "<< x << endl;
    cout << "y: " << y << endl;
    cout << endl;

    cout << "call swap method" << endl;

    swap(&x,&y);
    cout << endl;
    cout << "x: "<< x << endl;
    cout << "y: " << y << endl;
    cout << endl;

    return 0;
}