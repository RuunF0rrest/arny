#ifndef ARMY_DAMAGE_HPP
#define ARMY_DAMAGE_HPP


struct Damage {
  Damage(int value);

  int get_value() const;

private:
  int _value;
};

struct PhysicalDamage : Damage {
  PhysicalDamage(int value) : Damage(value) {}
};

struct MagicalDamage : Damage {
  MagicalDamage(int value) : Damage(value) {}
};




#endif //ARMY_DAMAGE_HPP
