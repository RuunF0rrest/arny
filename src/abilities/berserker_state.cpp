#include "berserker_state.hpp"

#include <iostream>

BerserkerState::BerserkerState(int hp_limit)
: UnitState(hp_limit) {}

void BerserkerState::take_damage(const MagicalDamage &damage) {
  std::cout << "Berserker has magic invulnerability" << std::endl;
}
