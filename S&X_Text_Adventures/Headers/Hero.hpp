//
//  Hero.hpp
//  S&X_Text_Adventures
//
//  Created by Sean Weiss on 5/31/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#ifndef Hero_h
#define Hero_h

// #include "Character.hpp"

#include <string>
#include "Character.hpp"

class Hero : public Character
{
    
public:
    Hero();
    Hero(std::string name, int health, int attack);
    
private:
    
};
#endif /* Hero_h */
