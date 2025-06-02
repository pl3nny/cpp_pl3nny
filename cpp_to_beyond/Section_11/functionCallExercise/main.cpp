// section 11 function 11
// creating and calling functions
#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celsius(double ftemp);
double fahrenheit_to_kelvin(double ftemp);

int main()
{
    double fahrenheit_temperature{77};
    double kelvin_temperature{0};
    double celsius_temperature{0};

    kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to "
         << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
    return 0;
}

double fahrenheit_to_celsius(double ftemp)
{
    double celsius_temperature{};

    celsius_temperature = (5.0 / 9.0) * (ftemp - 32);

    return round(celsius_temperature);
}

double fahrenheit_to_kelvin(double ftemp)
{
    double kelvin_temperature{};

    kelvin_temperature = fahrenheit_to_celsius(ftemp) + 273;

    return round(kelvin_temperature);
}