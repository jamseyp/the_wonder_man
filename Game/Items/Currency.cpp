//
// Created by James Parker on 2019-03-24.
//

#include <sstream>
#include "Currency.h"

WonderMan::Currency::Currency(int bronze, int silver, int gold) {
    this->bronze = bronze;
    this->silver = silver;
    this->gold = gold;
}

WonderMan::Currency::Currency(std::map<std::string, int> amount) {
    this->bronze = amount.at("bronze");
    this->silver = amount.at("silver");
    this->gold = amount.at("gold");
}

void WonderMan::Currency::add(int amount, Currency::Denomination denomination) {
    if (T_bronze == denomination) {
        auto a = decimalizer(amount);

        bronze += a.at("remainder");
        add(a.at("toAdd"), T_silver);
    }
    if (T_silver == denomination) {
        auto a = decimalizer(amount);

        silver += a.at("remainder");
        add(a.at("toAdd"), T_gold);
    }
    if (T_gold == denomination) {
        gold += amount;
    }
}

void WonderMan::Currency::add(std::map<std::string, int> amount) {
    add(amount.at("gold"), T_gold);
    add(amount.at("silver"), T_silver);
    add(amount.at("bronze"), T_bronze);
}

std::map<std::string, int> WonderMan::Currency::decimalizer(int amount) {
    std::map<std::string, int> ret = {
            {"toAdd",     amount / 100},
            {"remainder", amount % 100}
    };
    return ret;
}

std::string WonderMan::Currency::toString() const {
    std::ostringstream stream;
    stream << gold << "g" << silver << "s" << bronze << "b";
    return std::string();
}

int WonderMan::Currency::toBronze() {
    int s, b;
    s = (gold * 100) + silver;
    b = (s * 100) + bronze;
    return b;
}



