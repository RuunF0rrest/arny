#include <clocale>
#include "unit.hpp"
#include "soldier.hpp"

Unit *Unit::create(Unit::Units type) {
  switch (type) {
    case SOLDIER:
      return new Soldier(100, 10);
  }
}
