// Section 13
// constructor initialization list
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
    Player()
        : name{"None"}, health{0}, xp{0} {}
    Player(std::string name_val)
        : name{name_val}, health{0}, xp{0} {}
    Player(std::string name_val, int health_val, int xp_val)
        : name{name_val}, health{health}, xp{xp_val} {}

    std::string get_name()
    {
        return name;
    }
};

int main()
{
    Player slayer;

    cout << slayer.get_name() << endl;

    return 0;
}