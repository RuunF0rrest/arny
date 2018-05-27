#include "warrior.hpp"

Warrior::Warrior(int hp_limit, int damage)
: _state(new UnitState(hp_limit))
, _attack(new Attack(Damage(damage)))
{}

void Warrior::attack(Unit &enemy) {
    _attack->perform_attack(enemy);

    enemy.counter_attack(*this);
}

void Warrior::counter_attack(Unit &enemy) {
    _attack->perform_counter_attack(enemy);
}

void Warrior::take_damage(const MagicalDamage &damage) {
    _state->decrease_hp(damage.get_value());
}

void Warrior::take_damage(const PhysicalDamage &damage) {
    _state->decrease_hp(damage.get_value());
}

int Warrior::get_hp() {
    return _state->get_hp();
}
