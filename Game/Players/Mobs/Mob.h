//
// Created by James Parker on 2019-03-22.
//

#ifndef THE_WONDER_MAN_MOB_H
#define THE_WONDER_MAN_MOB_H

#include "../LifeForm.h"

namespace WonderMan {
    class Mob : public LifeForm {
    public:

        enum Rarity {
            common, rare, epic
        };

        Mob(uint32_t id, int playerLevel);

        Mob(uint32_t id, int playerLevel, Rarity rarity);

        Mob(uint32_t id, int playerLevel, Rarity rarity, bool isBoss);

        Rarity getRarity();

    protected:
        void calculateExpierence();

        void generateInventory();

        bool isBoss;

    };
}


#endif //THE_WONDER_MAN_MOB_H
