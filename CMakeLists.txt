cmake_minimum_required(VERSION 3.13)
project(the_wonder_man)

set(CMAKE_CXX_STANDARD 14)

add_executable(the_wonder_man main.cpp IO/Handler.cpp IO/Handler.h IO/Helper.cpp IO/Helper.h IO/Question.cpp IO/Question.h IO/Progress.cpp IO/Progress.h Game/Die/Die.cpp Game/Die/Die.h Game/Game.cpp Game/Game.h Game/Players/LifeForm.cpp Game/Players/LifeForm.h Game/Players/Mobs/Mob.cpp Game/Players/Mobs/Mob.h Game/Items/Item.cpp Game/Items/Item.h Game/Items/Currency.cpp Game/Items/Currency.h Game/Items/Inventory.cpp Game/Items/Inventory.h)