//Section 13
//Delegating Constructors
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
    // overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
    ~Player();
};

// old way

// Player::Player()
//     : name{"None"}, health{0}, xp{0} {}
// Player::Player(std::string name_val)
//     : name{name_val}, health{0}, xp{0} {}
// Player::Player(std::string name_val, int health_val, int xp_val)
//     : name{name_val}, health{health_val}, xp{xp_val} {}

// delegating constructors
Player::Player() // calling last constructor with all parameters
    : Player{"None", 0, 0}
{
    cout << "No-Args Constructors" << endl;
}
Player::Player(std::string name_val)
    : Player{name_val, 0, 0}
{
    cout << "One-Arg constructor" << endl;
}
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-Args constructor" << endl;
}

Player::~Player()
{
    cout << "Player " << name << " destroyed" << endl;
}

int main()
{
    Player empty;
    Player Frank("Frank");
    Player villain("Villain", 100, 55);

    cout << endl;
    return 0;
}