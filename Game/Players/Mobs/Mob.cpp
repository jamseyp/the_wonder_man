//
// Created by James Parker on 2019-03-22.
//

#include "Mob.h"

namespace WonderMan {
    Mob::Mob(uint32_t id, int playerLevel) : LifeForm(id) {}

    Mob::Mob(uint32_t id, int playerLevel, Rarity rarity) : LifeForm(id) {}

    Mob::Mob(uint32_t id, int playerLevel, Rarity rarity, bool isBoss) : LifeForm(id) {}
}