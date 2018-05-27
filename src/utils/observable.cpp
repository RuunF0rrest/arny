#include <clocale>
#include "observable.hpp"

void Observable::add_observer(Observer *observer) {
  observers.insert(observer);
}

void Observable::remove_observer(Observer *observer) {
  observers.erase(observer);
}

const Observable& Observable::notify_observers() {
  using iterator = std::set<Observer*>::iterator;

  iterator current = observers.begin();
  iterator end = observers.end();

  for ( ; current != end ; ) {
    (*current)->notify(this);
  }
}
