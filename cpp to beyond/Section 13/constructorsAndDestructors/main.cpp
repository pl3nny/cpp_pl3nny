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

    return 0;
}