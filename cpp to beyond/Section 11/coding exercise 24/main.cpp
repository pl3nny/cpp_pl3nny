// section 11
// overloading functions exercise
#include <iostream>
#include <cmath>

using namespace std;
int find_area(int);
double find_area(double, double);

int main()
{

    cout << "square: " << find_area(2) << endl;
    cout << "rectangle: " << find_area(4.5, 2.3) << endl;

    return 0;
}

int find_area(int side_length)
{
    int area{0};

    area = pow(side_length, 2);

    return area;
}

double find_area(double length, double width)
{
    double area{0};

    area = length * width;

    return area;
}