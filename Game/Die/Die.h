//
// Created by James Parker on 2019-03-22.
//

#ifndef THE_WONDER_MAN_DIE_H
#define THE_WONDER_MAN_DIE_H

#include <string>

namespace WonderMan {
    class Die {
    public:
        const int MIN_RESULT = 1;
        int numRolls; // the current number of times the die has been rolled.

        /**
         * Constructor
         * @param numSides
         */
        explicit Die(int numSides);

        /**
         * Default constructor
         */
        Die();

        /**
         * Rolls the die.
         */
        void roll();

        /**
         * Gets the last result of the die.
         * @return the last result
         */
        int getResult();

        /**
         * Sets the number of sides
         * @param sides the number of sides to set.
         */
        void setSides(int sides);

        /**
         * Gets the last result as a string.
         *
         * @return the last result
         */
        std::string toString();

    private:
        int sides;
        int result;
    };
}

#endif //THE_WONDER_MAN_DIE_H
