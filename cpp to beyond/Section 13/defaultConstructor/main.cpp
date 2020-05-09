// Section 13
// Default Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name)
    {
        this->name = name;
    }

    std::string get_name()
    {
        return name;
    }

    Player()
    {
        name = "none";
        health = 100;
        xp = 3;
    }

    // no default constructor c++ compiler will make one for you as long as you
    // don't have one. 
};

int main()
{
    Player frank;
    frank.set_name("frank");
    cout << frank.get_name() << endl;
    return 0;
}