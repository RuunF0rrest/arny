#ifndef ARMY_UNIT_STATE_HPP
#define ARMY_UNIT_STATE_HPP

#include "damage.hpp"

struct UnitState {
  UnitState(int hp_limit);

  int get_hp() const;
  int get_hp_limit() const;
  void add_hp(int amount);

  virtual void take_damage(const MagicalDamage &damage);
  virtual void take_damage(const PhysicalDamage &damage);

private:
  void decrease_hp(int value);

  int _current_hp;
  int _hp_limit;

};


#endif //ARMY_UNIT_STATE_HPP
