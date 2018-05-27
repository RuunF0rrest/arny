#include "damage.hpp"

Damage::Damage(int value)
: _value(value)
{}

int Damage::get_value() const {
  return _value;
}
