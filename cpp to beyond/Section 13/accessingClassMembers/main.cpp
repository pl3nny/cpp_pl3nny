// Section 13
// Accessing Class Members
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    string name;
    int health;
    int xp;

    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Account
{
public:
    string name;
    double balance;

    bool deposit(double bal);
    bool withdraw(double bal);
};

int main()
{

    Player pl3nny;
    pl3nny.name = "pl3nny";
    pl3nny.health = 100;
    pl3nny.xp = 12;

    cout << pl3nny.name << endl;
    cout << pl3nny.health << endl;
    cout << pl3nny.xp << endl;
    pl3nny.talk("hi there");

    Player *enemy = new Player;

    (*enemy).name = "enemy";
    enemy->xp = 15;
    enemy->talk("i will destroy you");

    delete enemy;

    cout << endl;
    return 0;
}