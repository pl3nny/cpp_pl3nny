// Section 18
// Miles per Gallon - No Exception handling
#include <iostream>

int main() {
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;
    
    if(gallons == 0){
        std::cout << "cannot devide by 0..." << std::endl;
    } else {
        miles_per_gallon = miles / gallons;
        miles_per_gallon = static_cast<double>(miles) / gallons;
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }

    std::cout << "Bye" << std::endl;
    return 0;
}