//
// Created by James Parker on 2019-03-22.
//

#ifndef THE_WONDER_MAN_GAME_H
#define THE_WONDER_MAN_GAME_H

#include "../IO/Handler.h"

namespace WonderMan {
    class Game {
    public:

        /**
         * Constructor
         *
         * @param handler
         */
        explicit Game(IO::Handler *handler);

        /**
         * Plays the game.
         *
         * @return true or false.
         */
        bool play();


    private:
        void showBanner();

        IO::Handler *handler;
    };
}


#endif //THE_WONDER_MAN_GAME_H
