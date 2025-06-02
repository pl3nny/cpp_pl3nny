#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include <iostream>

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    void set_name(std::string name);
    std::string get_name();
    ~Player();
};

#endif