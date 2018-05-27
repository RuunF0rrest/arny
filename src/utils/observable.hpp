#ifndef ARMY_OBSERVABLE_HPP
#define ARMY_OBSERVABLE_HPP

#include <set>

#include "observer.hpp"

struct Observable {
  void add_observer(Observer* observer);
  void remove_observer(Observer* observer);
  const Observable& notify_observers();

private:
  std::set<Observer*> observers;
};


#endif //ARMY_OBSERVABLE_HPP
