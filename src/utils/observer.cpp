#include "observer.hpp"

void Observer::add_observable(Observable *observable) {
  observables.insert(observable);
}

void Observer::remove_observable(Observable *observable) {
  observables.erase(observable);
}
