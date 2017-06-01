//
//  Enemy.hpp
//  S&X_Text_Adventures
//
//  Created by Sean Weiss on 5/31/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#ifndef Enemy_h
#define Enemy_h

#include <string>
#include "Character.hpp"

class Enemy : public Character
{
    
public:
    Enemy();
    Enemy(std::string name, int health, int attack);

private:
    
};

#endif /* Enemy_h */
