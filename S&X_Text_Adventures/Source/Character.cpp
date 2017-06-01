//
//  Character.cpp
//  S&X_Text_Adventures
//
//  Created by Sean Weiss on 5/31/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#include <iostream>
#include "Character.hpp"


std::ostream& operator<<(std::ostream& out, const Character& character)
{
    
    out << "Name: "<< character.getName() << std::endl;
    out << "Health: " << character.getHealth() << std::endl;
    out << "Attack: " << character.getAttack() << std::endl;
    out << "Mana: " << character.getMana() << std::endl;
    out << "Power: " << character.getPower() << std::endl;
    
    return out;
}

std::string Character::getName() const {
    return name;
}

int Character::getHealth() const{
    return health;
}

void Character::setHealth( int enemyAttack ) {
    this->health -= enemyAttack;
}
int Character::getAttack () const{
    return attack;
}

int Character::getMana() const{
    return mana;
}

int Character::getPower() const{
    return power;
}
