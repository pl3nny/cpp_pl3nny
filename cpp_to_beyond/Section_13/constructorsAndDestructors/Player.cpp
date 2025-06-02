#include "Player.h"

Player::Player() {}

Player::Player(std::string name)
{
    this->name = name;
}

Player::Player(std::string name, int health, int xp)
{
    this->name = name;
    this->health - health;
    this->xp = xp;
}

void Player::set_name(std::string name)
{
    this->name = name;
}

std::string Player::get_name()
{
    return name;
}

Player::~Player()
{
    std::cout << "Destructor called for " << name << std::endl;
}