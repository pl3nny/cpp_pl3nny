#include <iostream>

#include "Player.h"

using namespace std;

void display_active_players()
{
    cout << "Active Players: " << Player::get_num_players() << endl;
}

int main ()
{

    display_active_players();
    Player player ("player");
    display_active_players();

    {
        Player player2 {"player2"};
        display_active_players();
    }

    display_active_players();

    return 0;
}