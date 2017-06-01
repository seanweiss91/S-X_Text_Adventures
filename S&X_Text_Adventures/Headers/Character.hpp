//
//  Character.hpp
//  S&X_Text_Adventures
//
//  Created by Sean Weiss on 5/31/17.
//  Copyright © 2017 Sean Weiss. All rights reserved.
//

#ifndef Character_h
#define Character_h


class Character
{
    
public:
    
    friend std::ostream& operator<<(std::ostream& out, const Character& character);
    
    std::string getName() const;
    int getHealth() const;
    void setHealth(int health);
    int getMana() const;
    int getPower() const;
    int getAttack () const;
    
    
protected:
    std::string name;
    int health;
    int mana;
    int power;
    int attack;
};

#endif /* Character_h */
