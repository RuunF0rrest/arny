#include <iostream>
#include "units/unit.hpp"

int main() {
  std::cout << "Hello from Clion" << std::endl;

  Unit* soldier = Unit::create(Unit::SOLDIER);
  Unit* target = Unit::create(Unit::SOLDIER);

  soldier->attack(*target);

  std::cout << "Attacker hp : " << soldier->get_hp() << std::endl;
  std::cout << "Target hp: " << target->get_hp() << std::endl;

  return 0;
}