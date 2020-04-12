// Section 9
// Shipping

/*
    Shipping cost calculator

    Ask the user for the package dimensin in inches
    length, width, height - these should be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>

using namespace std;

int main()
{
    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_threshold{100}; // volume
    const int tier2_threshold{500}; // volume

    int max_dimension_length{10}; // inches

    double tier1_surcharge{0.10}; // 10% extra
    double tier2_surcharge{0.25}; // 25% extra

    // All dimension must be 10 inches or less

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        cout << "Sorry, cannot ship package..." << endl;
    }
    else
    {
        double package_cost{base_cost};
        package_volume = length * width * height;

        if (package_volume > tier2_threshold)
        {
            cout << "applying a " << tier2_surcharge << "% surchage" << endl;
            package_cost += tier2_surcharge * base_cost;
        }
        else if (package_volume > tier1_threshold)
        {
            cout << "applying a " << tier1_surcharge << "% surchage" << endl;
            base_cost += tier1_surcharge * base_cost;
        }

        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;
    }
    return 0;
}