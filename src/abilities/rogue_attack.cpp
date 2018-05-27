#include "rogue_attack.hpp"

RogueAttack::RogueAttack(const Damage &dmg)
: Attack(dmg) {}

void RogueAttack::perform_attack(Unit &attacker, Unit &target) {
  target.take_damage(_attack_dmg);
}
