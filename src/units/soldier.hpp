#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP

#include "unit.hpp"
#include "warrior.hpp"

struct Soldier : Warrior {
  Soldier(int hp_limit, int damage);
};


#endif //ARMY_SOLDIER_HPP
