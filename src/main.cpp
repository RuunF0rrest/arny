#include <iostream>
#include "units/unit.hpp"

int main() {
  std::cout << "Hello from Clion" << std::endl;

  Unit* rogue = Unit::create(Unit::ROGUE);
  Unit* target = Unit::create(Unit::SOLDIER);

  rogue->attack(*target);

  std::cout << "Rogue hp : " << rogue->get_hp() << std::endl;
  std::cout << "Target hp: " << target->get_hp() << std::endl;

  return 0;
}