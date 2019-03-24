#include "Helper.h"

//
// Created by James Parker on 2019-03-22.
//

#ifndef THE_WONDER_MAN_PROGRESS_H
#define THE_WONDER_MAN_PROGRESS_H


namespace IO {
    class Progress : public Helper {
    public:
        explicit Progress(Handler *handler);

        void update(double newProgress);

        void display();

        std::string firstPartOfBar = "[",
                lastPartOfBar = "]",
                barFiller = "|",
                barUpdater = "/-\\|";

    private:
        int amountOfFiller,
                barLength = 50,
                curUpdateVal = 0;
        double currentProgress = 0,
                neededProgress = 100;

    };
}


#endif //THE_WONDER_MAN_PROGRESS_H
