// section 13
// constructors and destructors
#include "Player.h"

using namespace std;

int main()
{
    cout << endl;

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player pl3nny;
        pl3nny.set_name("pl3nny");

        Player hero("Hero");
        hero.set_name("Hero");

        Player villain("Villain", 100, 12);
        villain.set_name("villain");
    }

    Player *enemy = new Player;
    enemy->set_name("enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;
    return 0;
}