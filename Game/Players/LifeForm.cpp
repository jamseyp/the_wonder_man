//
// Created by James Parker on 2019-03-22.
//

#include "LifeForm.h"

namespace WonderMan {

    LifeForm::LifeForm(uint32_t id) {
        this->id = id;
        auto inventory = Inventory(150, 0);
    }

    uint32_t LifeForm::getId() {
        return id;
    }

    void LifeForm::levelUp() {
        level++;
        experienceRequirement = 75 + (level * level) * 27;

        maxHealth = 100 * level;

        health = maxHealth;
    }


    double LifeForm::getDamage() const { return damage; }

    double LifeForm::getHealth() const { return health; }

    int LifeForm::getLevel() const { return level; }

    std::string LifeForm::getName() const { return name; }

    bool LifeForm::isAlive() const { return health > 0; }

    double LifeForm::getMaxHealth() const {
        return maxHealth;
    }

    int LifeForm::getExperienceRequirement() const {
        return experienceRequirement;
    }

    int LifeForm::getCritChance() const {
        return stats.at("luck") + stats.at("dexterity");
    }
}

