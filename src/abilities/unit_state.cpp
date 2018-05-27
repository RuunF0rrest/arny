#include "unit_state.hpp"

UnitState::UnitState(int hp_limit)
: _current_hp(hp_limit), _hp_limit(hp_limit) {}

int UnitState::get_hp() const {
    return _current_hp;
}

void UnitState::take_damage(const MagicalDamage &damage) {
  decrease_hp(damage.get_value());
}

void UnitState::take_damage(const PhysicalDamage &damage) {
  decrease_hp(damage.get_value());
}

void UnitState::decrease_hp(int value) {
    if (value > _current_hp) {
      _current_hp = 0;
    } else {
      _current_hp -= value;
    }

    return;
}

int UnitState::get_hp_limit() const {
  return _hp_limit;
}

void UnitState::add_hp(int amount) {
  if (_current_hp + amount > _hp_limit) {
    _current_hp = _hp_limit;
  } else {
    _current_hp += amount;
  }

  return;
}
