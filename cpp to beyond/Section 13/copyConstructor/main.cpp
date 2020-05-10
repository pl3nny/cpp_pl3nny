//section 13
//copy constructor
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
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    //prototype copy constructor
    Player(const Player &source);

    //Destructor
    ~Player();
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three -args constructor called for " + name << endl;
}

Player::Player(const Player &source)
    : name{source.name}, health{source.health}, xp{source.xp}
{
    cout << "Copy constructor - made copy of: " << source.name << endl;
}

Player::~Player()
{
    cout << "Destructor called on " << name << endl;
}

void display_player(Player p)
{
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main()
{
    Player empty;

    Player new_player_obj(empty);

    display_player(new_player_obj);

    Player frank("frank");
    Player hero("Hero", 100);
    Player villain("villain", 100, 55);

    return 0;
}