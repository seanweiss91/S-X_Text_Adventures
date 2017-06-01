//
//  Enemy.cpp
//  S&X_Text_Adventures
//
//  Created by Sean Weiss on 5/31/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#include "Enemy.hpp"

Enemy::Enemy()
{
    name = "squeeb";
    health = 10;
    mana = 0;
    power = 0;
    attack = 2;
}

Enemy::Enemy(std::string name, int health, int attack)
{
    this->name = name;
    this-> health = health;
    this-> attack = attack;
    this->mana = 0;
    this->power = 0;
}
