#ifndef ARMY_WARRIOR_HPP
#define ARMY_WARRIOR_HPP

#include "unit.hpp"
#include "../abilities/attack.hpp"
#include "../abilities/unit_state.hpp"


struct UnitState;
struct Attack;

struct Warrior : Unit {
  Warrior(int hp_limit, int damage);

  virtual void attack(Unit &enemy);

  virtual void counter_attack(Unit &enemy);

  virtual void take_damage(const MagicalDamage &damage);

  virtual void take_damage(const PhysicalDamage &damage);

  virtual int get_hp();


  UnitState* _state;
  Attack* _attack;
};


#endif //ARMY_WARRIOR_HPP
