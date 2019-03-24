#include <iostream>

#include "IO/Handler.h"
#include "IO/Question.h"
#include "IO/Progress.h"

#include "Game/Game.h"
#include "Game/Items/Currency.h"


void runGame() {
    bool run = true;
    WonderMan::Game game(new IO::Handler());
    while (run) {
        run = game.play();
    }
}

int main() {
    runGame();

    return 0;
}