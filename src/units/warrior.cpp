#include "warrior.hpp"

Warrior::Warrior(UnitState* state, Attack* attack)
: _state(state)
, _attack(attack)
{}

void Warrior::attack(Unit &enemy) {
    _attack->perform_attack(*this, enemy);
}

void Warrior::counter_attack(Unit &enemy) {
    _attack->perform_counter_attack(enemy);
}

void Warrior::take_damage(const MagicalDamage &damage) {
    _state->take_damage(damage);
}

void Warrior::take_damage(const PhysicalDamage &damage) {
    _state->take_damage(damage);
}

int Warrior::get_hp() {
    return _state->get_hp();
}
