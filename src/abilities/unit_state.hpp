#ifndef ARMY_UNIT_STATE_HPP
#define ARMY_UNIT_STATE_HPP


struct UnitState {
  UnitState(int hp_limit);

  int get_hp() const;
  void decrease_hp(int value);

private:
  int _current_hp;
  int _hp_limit;

};


#endif //ARMY_UNIT_STATE_HPP
