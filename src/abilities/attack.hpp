#ifndef ARMY_ATTACK_HPP
#define ARMY_ATTACK_HPP

#include "damage.hpp"
#include "../units/unit.hpp"

struct Attack {
  Attack(const Damage& dmg);

  virtual void perform_attack(Unit &unit);

  virtual void perform_counter_attack(Unit &unit);

private:
  PhysicalDamage _attack_dmg;
  PhysicalDamage _counter_attack_dmg;
};


#endif //ARMY_ATTACK_HPP
