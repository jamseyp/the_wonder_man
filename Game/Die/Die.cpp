//
// Created by James Parker on 2019-03-22.
//

#include <random>
#include "Die.h"


namespace WonderMan {
    Die::Die() {
        sides = 6;
    }

    Die::Die(int numSides) {
        sides = numSides;
    }

    void Die::roll() {
        //the random device that will seed the generator
        std::random_device seeder;
        //then make a mersenne twister engine
        std::mt19937 engine(seeder());
        //then the easy part... the distribution
        std::uniform_int_distribution<int> dist(Die::MIN_RESULT, sides);
        //then just generate the integer like this:
        result = dist(engine);
        // Increment the roll counter.
        numRolls++;
    }

    int Die::getResult() {
        return result;
    }

    std::string Die::toString() {
        return "Result was " + std::to_string(getResult());
    }

    void Die::setSides(int sides) {
        this->sides = sides;
    }

}