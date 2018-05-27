#include "unit_state.hpp"

UnitState::UnitState(int hp_limit)
: _current_hp(hp_limit), _hp_limit(hp_limit) {}

int UnitState::get_hp() const {
  return _current_hp;
}

void UnitState::decrease_hp(int value) {
  if (value > _current_hp) {
    _current_hp = 0;
  } else {
    _current_hp -= value;
  }

  return;
}
