// Section 13
// const in classes
#include <iostream>
#include <string>

using namespace std;

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
    std::string get_name() const
    {
        return name;
    }

    void set_name(std::string name)
    {
        this->name = name;
    }

    //overloader constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);

};

Player::Player()
    : Player("None", 0, 0)
{}

Player::Player(std::string name_val)
    : Player{name_val, 0, 0}
{}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{}

void display_player_name(const Player &p)
{
    cout << p.get_name() << endl;
}


int main()
{
    // can't change villain attributes because it's a const of type player
    const Player villain {"Villian", 100, 155};
    Player hero {"Hero", 100, 15};

    cout << "Author: Alexander Hernandez" << endl;

    return 0;
} 