#ifndef ACTORS_H
#define ACTORS_H

#include <climits>
#include <iostream>
#include <typeinfo>

#include "../random_numbers.h"

namespace one_d_fighter {

class Actor {
   public:
    Actor(std::string name, int initialHealth, int strength = 1,
          int resilience = 1)
        : name(name),
          health(initialHealth),
          strength(strength),
          resilience(resilience) {};

    virtual void Hit(Actor* target) {
        std::cout << name << " hits " << target->GetName() << std::endl;
        target->TakeDamage((baseDamage * strength) + rng.get(1, 3));
    }
    virtual void TakeDamage(int damage) {
        std::cout << name << " took damage: " << damage << std::endl;
        health -= damage - resilience;
        health = std::clamp(health, 0, INT_MAX);
        std::cout << name << " health: " << health << std::endl;
    }
    virtual bool IsDead() { return health <= 0; }

    std::string GetName() { return name; }
    int GetHealth() { return health; }

   protected:
    std::string name;
    int strength;
    int health;
    int resilience;
    int baseDamage = 10;
    game::RandomNumberGenerator rng;
};

}  // namespace one_d_fighter
#endif  // ACTORS_H