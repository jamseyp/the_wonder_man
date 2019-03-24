//
// Created by James Parker on 2019-03-24.
//

#ifndef THE_WONDER_MAN_ITEM_H
#define THE_WONDER_MAN_ITEM_H

#include <cstdint>
#include <string>

class Item {

public:
    enum Rarity {
        T_common,
        T_rare,
        T_epic
    };
    enum Type {
        T_Junk,
        T_Weapon,
        T_Armour,
        T_Consumable,
        T_VendorTrash,
        T_QuestItem,
    };

    Item(__const uint32_t id);

    Item(__const uint32_t id, __const Rarity rarity);

    Item(__const uint32_t id, __const Rarity rarity, __const bool isBoss);

    uint32_t getId() __const;

    std::string getName() __const;

    unsigned int getWeight() __const;

    int getSalePrice(__const double discount) __const;

    int getCost() __const;

    Rarity getRarity();

    Type getItemType() __const;

protected:
    std::string name;
    int weight;

    virtual void setName(std::string name) = 0;

private:
    uint32_t id;


};


#endif //THE_WONDER_MAN_ITEM_H
