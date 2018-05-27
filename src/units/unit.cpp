#include "unit.hpp"
#include "soldier.hpp"
#include "rogue.hpp"
#include "../abilities/rogue_attack.hpp"

#include <map>

namespace {

struct UnitStats {
  UnitStats(int _hp_limit, int _damage)
  : hp_limit(_hp_limit)
  , damage(_damage)
  {}

  int hp_limit;
  int damage;
};

const std::map<Unit::Units, UnitStats> stats = {
    {Unit::SOLDIER, {100, 10}},
    {Unit::ROGUE,   {70, 20}}
};

}

Unit *Unit::create(Unit::Units type) {
  using map_iterator = std::map<Unit::Units, UnitStats>::const_iterator;

  map_iterator it = stats.find(type);
  if (it == stats.end()) {
      throw std::runtime_error("Unknown unit type");
  }

  const UnitStats& unit_stats = it->second;
  UnitState* state = new UnitState(unit_stats.hp_limit);
  Attack* attack;

  switch (type) {
    case SOLDIER:
      attack = new Attack(Damage(unit_stats.damage));
      return new Soldier(state, attack);
    case ROGUE:
      attack = new RogueAttack(Damage(unit_stats.damage));
      return new Rogue(state, attack);
  }
}
