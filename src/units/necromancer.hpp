#ifndef ARMY_NECROMANCER_HPP
#define ARMY_NECROMANCER_HPP

#include "warrior.hpp"
#include "../utils/observer.hpp"


struct Necromancer : Warrior, Observer {
  Necromancer(UnitState *state, Attack *attack);

  virtual void notify(Observable *observable);
};


#endif //ARMY_NECROMANCER_HPP
