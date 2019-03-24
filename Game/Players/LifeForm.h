//
// Created by James Parker on 2019-03-22.
//

#ifndef THE_WONDER_MAN_LIFEFORM_H
#define THE_WONDER_MAN_LIFEFORM_H

#include <cstdint>
#include <string>
#include <cmath>
#include <map>
#include "../Items/Inventory.h"

namespace WonderMan {
    class LifeForm {

    public:
        Inventory *inventory;

        explicit LifeForm(uint32_t id);

        ~LifeForm() = default;

        uint32_t getId();

        // gets the damage of the lifeform
        double getDamage() const;

        // Gets the health of the lifeform
        double getHealth() const;

        // Gets the current level of the lifeform.
        int getLevel() const;

        // Gets the name of the lifeform
        std::string getName() const;

        // Checks if the lifeforms is alive.
        bool isAlive() const;

        // get the lifeforms max health.
        double getMaxHealth() const;

        // Gets the experience requirement for the next level up.
        int getExperienceRequirement() const;

        std::map<std::string, int> getStats() {
            return this->stats;
        }

        // Perform an attack.
        void attack(LifeForm *lifeForm);

    protected:
        uint32_t id;
        int experience = 0;
        int experienceRequirement;
        int level;
        double damage;
        double health;
        double maxHealth;
        std::string name;

        std::map<std::string, int> stats = {
                {"strength",     0},// modifier for attack strength.
                {"stamina",      0},// modifier for health.
                {"defense",      0},// modifier for defending.
                {"dexterity",    0},// modifier for hit chance and defend chance.
                {"intelligence", 0},// modifier for experience gained from kill.
                {"charisma",     0},
                {"perception",   0},
                {"luck",         0}// increases the chance of a hit/defense etc..
        };

        // Should be called when a lifeform has been defeated in a attack
        void hasKilled(LifeForm const *deadLifeForm);

        // Takes damage from the health.
        void takeDamage(double damage);

        // Levels up the lifeForm. Protected as this shouldn't be called externally.,
        void levelUp();

        // Gets chance of critical
        int getCritChance() const;

        // Sets the starting stats for the lifeform.
        virtual void setStartingStats();

    };


}


#endif //THE_WONDER_MAN_LIFEFORM_H
