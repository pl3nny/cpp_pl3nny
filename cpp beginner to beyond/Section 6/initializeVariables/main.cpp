#include <iostream>

using namespace std;

// this program will calculate the area of a room in square feet

int main()
{
    cout << "Enter the width of the room: ";
    int room_width {0};   // declare variables right before using them for best practice
    cin >> room_width;

    cout << "Enter the length of the room: ";
    int room_length {0}; //c++11+ initializes variables like this now
    cin >> room_length;

    cout << "The area of the room is " << room_length * room_width << " square feet" << endl;

    return 0;
}