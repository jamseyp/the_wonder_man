//
// Created by James Parker on 2019-03-20.
//

#include <iostream>
#include <sstream>

#include "Handler.h"

int IO::Handler::writeToConsole(std::string m, bool endl) {
    std::cout << m;
    if (endl) {
        std::cout << std::endl;
    }
    return numberOfCharsInString(m);
}

std::string IO::Handler::fromConsole() {
    std::string input;
    getline(std::cin, input);
    return input;
}

int IO::Handler::numberOfCharsInString(std::string string) {
    return static_cast<int>(std::count(string.begin(), string.end(), '_'));
}

void IO::Handler::flush() {
    std::cout << std::flush;
}

