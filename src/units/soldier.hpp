#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP

#include "unit.hpp"
#include "warrior.hpp"

struct Soldier : Warrior {
  Soldier(UnitState* state, Attack* attack);
};


#endif //ARMY_SOLDIER_HPP
