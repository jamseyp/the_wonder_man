//
// Created by James Parker on 2019-03-24.
//

#ifndef THE_WONDER_MAN_INVENTORY_H
#define THE_WONDER_MAN_INVENTORY_H

#include <vector>
#include "Item.h"
#include "Currency.h"

namespace WonderMan {
    class Inventory {
    public:
        std::vector<Item> *container;
        Currency *currency;

        Inventory(unsigned int size, unsigned int capacity);

        bool add(__const Item &item);

        unsigned int getCapacity() __const;

        unsigned int getSize() __const;

        void setCapacity(unsigned int capacity);

        __const Item &get(unsigned int index) __const;

        bool remove(unsigned int index);

        bool operator<(const Inventory &rhs) __const;

        bool operator>(const Inventory &rhs) __const;

        bool operator<=(const Inventory &rhs) __const;

        bool operator>=(const Inventory &rhs) __const;


    private:
        unsigned int size, capacity;
    };
}


#endif //THE_WONDER_MAN_INVENTORY_H
