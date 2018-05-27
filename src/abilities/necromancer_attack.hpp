#ifndef ARMY_NECROMANCER_ATTACK_HPP
#define ARMY_NECROMANCER_ATTACK_HPP

#include "attack.hpp"

class NecromancerAttack : Attack {
public:
  NecromancerAttack(const Damage &dmg);

private:
  virtual void perform_attack(Unit &attacker, Unit &target);
};


#endif //ARMY_NECROMANCER_ATTACK_HPP
