// section 13
// declare classes and objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    //attributes - data - to access attributes gotta set them to public:
    string name{"Player"};
    int health{100};
    int xp{3};

    // methods - operations and functions
    void talk(string);
    bool is_dead();
};

class Account
{
    //attributes
    string name{"Account"};
    double balance{0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{

    Account pl3nny_account;
    Account jim_account;

    Player pl3nny;
    Player hero;

    Player players[]{pl3nny, hero};

    vector<Player> player_vec{pl3nny};

    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;

    cout << endl;
    return 0;
}