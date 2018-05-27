#include "necromancer.hpp"

const double CONVERSION_RATE = 0.1;

Necromancer::Necromancer(UnitState *state, Attack *attack)
: Warrior(state, attack), Observer() {}


//TODO
void Necromancer::notify(Observable *observable) {
  int hp_to_add = static_cast<int> (
    reinterpret_cast<Unit*>(observable)->get_hp() * CONVERSION_RATE
  );

  observable->add_observer(this);
  remove_observable(observable);

  _state->add_hp(hp_to_add);
}
