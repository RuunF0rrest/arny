#ifndef ARMY_BERSERKER_HPP
#define ARMY_BERSERKER_HPP

#include "warrior.hpp"

struct Berserker : Warrior {
  Berserker(UnitState *state, Attack *attack);
};


#endif //ARMY_BERSERKER_HPP
