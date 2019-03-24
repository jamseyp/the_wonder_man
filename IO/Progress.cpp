//
// Created by James Parker on 2019-03-22.
//

#include "Progress.h"

namespace IO {
    Progress::Progress(Handler *handler) : Helper(handler) {}

    void Progress::update(double newProgress) {
        currentProgress += newProgress;
        amountOfFiller = (int) ((currentProgress / neededProgress) * (double) barLength);
    }

    void Progress::display() {
        curUpdateVal %= barUpdater.length();
        handler->writeToConsole("\r", false); //Bring cursor to start of line
        handler->writeToConsole(firstPartOfBar, false); //Print out first part of pBar

        for (int a = 0; a < amountOfFiller; a++) {//Print out current progress
            handler->writeToConsole(barFiller, false);
        }
        handler->writeToConsole(barUpdater[curUpdateVal], false);
        for (int b = 0; b < barLength - amountOfFiller; b++) { //Print out spaces
            handler->writeToConsole(" ", false);
        }
        handler->writeToConsole(lastPartOfBar, " (", false);
        auto n = 100 * (currentProgress / neededProgress);

        handler->writeToConsole(n, "%)", false);
        std::cout << std::flush;
        curUpdateVal += 1;
    }
}
