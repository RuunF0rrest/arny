#ifndef ARMY_UNIT_HPP
#define ARMY_UNIT_HPP

#include "../abilities/damage.hpp"

struct Damage;
struct Attack;

struct Unit {

  enum Units {
    SOLDIER
  };

  virtual void attack(Unit& enemy) = 0;

  virtual void take_damage(const MagicalDamage& damage) = 0;

  virtual void take_damage(const PhysicalDamage& damage) = 0;

  virtual void counter_attack(Unit& enemy) = 0;

  virtual int get_hp() = 0;

  static Unit* create(Units type);

};


#endif //ARMY_UNIT_HPP
