//
// Created by James Parker on 2019-03-20.
//

#ifndef THE_WONDER_MAN_HELPER_H
#define THE_WONDER_MAN_HELPER_H

#include "Handler.h"

namespace IO {
    class Helper {
    public:
        explicit Helper(Handler *handler);

        virtual void display() = 0;

    protected:
        Handler *handler;

    };
};


#endif //THE_WONDER_MAN_HELPER_H
