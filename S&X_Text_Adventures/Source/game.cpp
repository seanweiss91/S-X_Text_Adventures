//
//  game.cpp
//  S&X_Text_Adventures
//
//  Created by Sean Weiss on 5/31/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

// #include "Character.hpp"

#include <iostream>
#include "Hero.hpp"
#include "Enemy.hpp"

void startBattle ( Hero &Hero, Enemy &Enemy );

int main()
{
    
    Hero squeeb2("Squeebster", 16, 4);
    
    Enemy Grommel("Grommel", 20, 2);
    
    startBattle( squeeb2, Grommel );
    
    
    
    return 0;
}

void startBattle ( Hero &Hero, Enemy &Enemy )
{
    
    std::cout << Hero << std::endl;
    
    std::cout << Enemy << std::endl;

    std::cout << "Hero attacks enemy" << std::endl;
    
    Enemy.setHealth( Hero.getAttack() );
    
    std::cout  << Enemy << std::endl;
    
    std::cout << "Enemy attacks Hero\n" << std::endl;
    
    Hero.setHealth( Enemy.getAttack() );
    
    std::cout << Hero << std::endl;
    
    

}
