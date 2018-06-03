#include "Player.h"



Player::Player()
{
	this->name = "";
	this->gender = 'u';
	this->health = 1;
}

Player::Player(string name, string gender, int health)
{
	this->setName(name);
	this->setGender(gender);
	this->health = health;
}

Player::~Player()
{
}


