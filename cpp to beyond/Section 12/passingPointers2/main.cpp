#include <array>
#include <iostream>

using namespace std;

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x{100}, y{200};

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    cout << endl;
    cout << "now using swap function..." << endl;
    swap(&x, &y);
    cout << endl;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}