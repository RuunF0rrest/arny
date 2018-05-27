#include "unit.hpp"
#include "soldier.hpp"
#include "rogue.hpp"
#include "berserker.hpp"

#include "../abilities/rogue_attack.hpp"
#include "../abilities/berserker_state.hpp"

#include <map>
#include <functional>

namespace {

struct Creator {
  virtual Unit* create() const = 0;
};

template <typename UnitType, typename AttackType, typename StateType>
struct WarriorCreator : Creator {

  WarriorCreator(int _hp_limit, int _damage)
  : hp_limit(_hp_limit), damage(_damage)
  {}

  Unit* create() const {
    return new UnitType(
      new StateType(hp_limit),
      new AttackType(Damage(damage))
    );
  }

  int hp_limit;
  int damage;
};

using SoldierCreator = WarriorCreator<Soldier, Attack, UnitState>;
using RogueCreator = WarriorCreator<Rogue, RogueAttack, UnitState>;
using BerserkerCreator = WarriorCreator<Berserker, Attack, BerserkerState>;

const std::map<Unit::Units, Creator*> stats = {
    {Unit::SOLDIER,   new SoldierCreator(100, 10)},
    {Unit::ROGUE,     new RogueCreator(70, 20)},
    {Unit::BERSERKER, new BerserkerCreator(170, 15)}
};

}

Unit *Unit::create(Unit::Units type) {
  using map_iterator = std::map<Unit::Units, Creator*>::const_iterator;

  map_iterator it = stats.find(type);
  if (it == stats.end()) {
      throw std::runtime_error("Unknown unit type");
  }

  const Creator* creator = it->second;

  return creator->create();
}
