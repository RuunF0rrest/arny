#ifndef ARMY_OBSERVER_HPP
#define ARMY_OBSERVER_HPP

#include <set>

struct Observable;

struct Observer {
  virtual void notify(Observable* observable) = 0;

  void add_observable(Observable* observable);

  void remove_observable(Observable* observable);

private:
  std::set<Observable*> observables;
};


#endif //ARMY_OBSERVER_HPP
