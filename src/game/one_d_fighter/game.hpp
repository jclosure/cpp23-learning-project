#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

#include "../random_numbers.h"
#include "actors.h"

namespace one_d_fighter {
class Game {
   public:
    Game(int numHumans, int numMonsters) {
        for (int i = 0; i < numHumans; i++) {
            this->humans.push_back(Actor("Human" + std::to_string(i),
                                         humanHealth, rng.get(1, 3),
                                         rng.get(1, 3)));
        }
        for (int i = 0; i < numMonsters; i++) {
            this->monsters.push_back(Actor("Monster" + std::to_string(i),
                                           monsterHealth, rng.get(1, 3),
                                           rng.get(1, 3)));
        }
    };
    void Start() {
        std::cout << "Game Start!" << std::endl;
        std::cout << "Turn: " << turns << std::endl;
        while (true) {
            auto& monster = monsters[0];
            auto& human = humans[0];
            if (rng.get(0, 1) > 0) {
                human.Hit(&monster);
                if (monster.IsDead()) {
                    monsters.erase(monsters.begin());
                }
            } else {
                monster.Hit(&human);
                if (human.IsDead()) {
                    humans.erase(humans.begin());
                }
            }
            std::cout << "Humans: " << humans.size()
                      << " Monsters: " << monsters.size() << std::endl;
            if (humans.empty()) {
                std::cout << "Monsters Win!" << std::endl;
                break;
            } else if (monsters.empty()) {
                std::cout << "Humans Win!" << std::endl;
                break;
            }
            turns++;
            std::cout << "-----------" << std::endl;
        }
    }

   private:
    std::vector<Actor> humans;
    std::vector<Actor> monsters;
    int humanHealth = 100;
    int monsterHealth = 100;
    game::RandomNumberGenerator rng;
    int turns = 1;
};
}  // namespace one_d_fighter

#endif
