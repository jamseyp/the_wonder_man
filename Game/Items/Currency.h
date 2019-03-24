//
// Created by James Parker on 2019-03-24.
//

#ifndef THE_WONDER_MAN_CURRENCY_H
#define THE_WONDER_MAN_CURRENCY_H

#import <string>
#include <map>

namespace WonderMan {
    class Currency {

    public:
        int bronze, silver, gold;
        enum Denomination {
            T_bronze, T_silver, T_gold
        };

        Currency(int bronze, int silver, int gold);

        explicit Currency(std::map<std::string, int> amount);

        void add(int amount, Denomination denomination);

        void add(std::map<std::string, int> amount);

        int toBronze();

        std::string toString() __const;

    private:
        std::map<std::string, int> decimalizer(int amount);
    };
}

#endif //THE_WONDER_MAN_CURRENCY_H
