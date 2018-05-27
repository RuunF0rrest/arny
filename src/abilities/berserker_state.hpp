#ifndef ARMY_BERSERKER_STATE_HPP
#define ARMY_BERSERKER_STATE_HPP

#include "unit_state.hpp"

struct BerserkerState : UnitState {
  BerserkerState(int hp_limit);

  virtual void take_damage(const MagicalDamage &damage);
};


#endif //ARMY_BERSERKER_STATE_HPP
