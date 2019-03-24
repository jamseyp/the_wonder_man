//
// Created by James Parker on 2019-03-24.
//

#include "Inventory.h"

WonderMan::Inventory::Inventory(unsigned int size, unsigned int capacity) {
    this->capacity = capacity;
    this->size = size;
    this->currency = new Currency(0, 0, 0);
}

bool WonderMan::Inventory::add(__const Item &item) {
    if (capacity > size) {
        container.push_back(item);
        // Add the weight of the item to the current size.
        size += item.getWeight();
        return true;
    }
    return false;
}

unsigned int WonderMan::Inventory::getCapacity() const {
    return capacity;
}

unsigned int WonderMan::Inventory::getSize() const {
    return size;
}


void WonderMan::Inventory::setCapacity(unsigned int capacity) {
    if (this->capacity == capacity) {
        return;
    }
    this->capacity = capacity;
}

__const Item &WonderMan::Inventory::get(unsigned int index) const {
    return container.at(index);
}

bool WonderMan::Inventory::remove(unsigned int index) {
    if (index < size) {
        container.erase(container.begin() + index);
        return true;
    }
    return false;
}

bool WonderMan::Inventory::operator<(const WonderMan::Inventory &rhs) const {
    if (container < rhs.container)
        return true;
    if (rhs.container < container)
        return false;
    if (size < rhs.size)
        return true;
    if (rhs.size < size)
        return false;
    return capacity < rhs.capacity;
}

bool WonderMan::Inventory::operator>(const WonderMan::Inventory &rhs) const {
    return rhs < *this;
}

bool WonderMan::Inventory::operator<=(const WonderMan::Inventory &rhs) const {
    return !(rhs < *this);
}

bool WonderMan::Inventory::operator>=(const WonderMan::Inventory &rhs) const {
    return !(*this < rhs);
}