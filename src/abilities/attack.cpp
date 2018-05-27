#include "attack.hpp"

Attack::Attack(const Damage &dmg)
: _attack_dmg(dmg.get_value())
, _counter_attack_dmg(dmg.get_value() / 2)
{}

void Attack::perform_attack(Unit &unit) {
  unit.take_damage(_attack_dmg);
}

void Attack::perform_counter_attack(Unit &unit) {
  unit.take_damage(_counter_attack_dmg);
}

