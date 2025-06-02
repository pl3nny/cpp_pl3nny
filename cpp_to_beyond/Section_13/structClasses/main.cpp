#include <iostream>
#include <string>

struct otherPerson
{
    //by default struct variables are public
    static std::string name;
};

std::string otherPerson::name = "Finn";

int main()
{
    std::cout << otherPerson::name << std::endl;
    return 0;
}