#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celsius(double fTemp);
double fahrenheit_to_kelvin(double fTemp);

int main() {

    double kelvin_temperature {};
    double celsius_temperature {};

    double fahrenheit_temperature {98.2};

    cout << fahrenheit_temperature << endl;
    cout << endl;

    kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);

    cout << "\tTemperature\n" << endl;
    cout << "kelvin temp: " << kelvin_temperature << endl;
    cout << "celsious temp: " << celsius_temperature << endl;


    return 0;
}

double fahrenheit_to_celsius(double fTempt) {
    double result {};

    result = (5.0 / 9.0) * (fTempt - 32);

    return round(result);
}

double fahrenheit_to_kelvin(double fTemp) {
    double result {};

    result = fahrenheit_to_celsius(fTemp) + 273;

    return round(result);
}