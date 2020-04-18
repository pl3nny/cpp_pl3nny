// Section 11
// Function Definitions
// Area of a circle and volume of a cylinder

#include <iostream>

using namespace std;

void area_circle();
double cal_area_circle(double radius);
void volume_cylinder();
double cal_volume_cylinder(double radius, double height);

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}

void area_circle()
{
    double radius{};
    cout << "\nenter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << cal_area_circle(radius) << endl;
}

double cal_area_circle(double radius)
{
    const double pi {3.14149};

    return pi * radius * radius;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;

    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with raidus " << radius << " and height " << height << " is "
    << cal_volume_cylinder(radius, height) << endl;
}

double cal_volume_cylinder(double radius, double height)
{
    const double pi {3.14149};

    return cal_area_circle(radius) * height;
}