//
// Created by James Parker on 2019-03-22.
//

#include "Game.h"

WonderMan::Game::Game(IO::Handler *handler) : handler(handler) {}

void WonderMan::Game::showBanner() {
    handler->writeToConsole(handler->placeholder, handler->placeholder);
    handler->writeToConsole("The Wonder Man!!!!!");
    handler->writeToConsole(handler->placeholder, handler->placeholder);
}

bool WonderMan::Game::play() {
    showBanner();

    return false;
}
