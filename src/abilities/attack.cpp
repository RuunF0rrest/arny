#include "attack.hpp"
#include "../units/necromancer.hpp"

Attack::Attack(const Damage &dmg)
: _attack_dmg(dmg.get_value())
, _counter_attack_dmg(dmg.get_value() / 2)
{}

void Attack::perform_attack(Unit& attacker ,Unit &target) {
  target.take_damage(_attack_dmg);
  target.counter_attack(attacker);
}

void Attack::perform_attack(Necromancer& attacker ,Unit &target) {
  attacker.add_observable(&target);
  target.add_observer(&attacker);

  target.take_damage(_attack_dmg);
  target.counter_attack(attacker);
}

void Attack::perform_counter_attack(Unit &unit) {
  unit.take_damage(_counter_attack_dmg);
}

