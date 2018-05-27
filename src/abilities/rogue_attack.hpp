#ifndef ARMY_ROUGE_ATTACK_HPP
#define ARMY_ROUGE_ATTACK_HPP

#include "attack.hpp"

struct RogueAttack : Attack {
  RogueAttack(const Damage &dmg);

  virtual void perform_attack(Unit &attacker, Unit &target);
};


#endif //ARMY_ROUGE_ATTACK_HPP
