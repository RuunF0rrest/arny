cmake_minimum_required(VERSION 3.8)
project(army)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_COMPILER g++-4.9)

set(SOURCE_FILES
    src/main.cpp

    src/units/unit.cpp
    src/units/soldier.cpp
    src/units/warrior.cpp
    src/units/rogue.cpp
    src/units/berserker.cpp
    src/units/necromancer.cpp

    src/utils/observable.cpp
    src/utils/observer.cpp

    src/abilities/unit_state.cpp
    src/abilities/attack.cpp
    src/abilities/damage.cpp
    src/abilities/rogue_attack.cpp
    src/abilities/berserker_state.cpp
    src/abilities/necromancer_attack.cpp
    )

add_executable(army ${SOURCE_FILES})