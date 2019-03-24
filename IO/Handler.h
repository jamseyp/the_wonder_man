//
// Created by James Parker on 2019-03-20.
//

#ifndef THE_WONDER_MAN_HANDLER_H
#define THE_WONDER_MAN_HANDLER_H


#include <string>
#include <iostream>
#include <iostream>
#include <sstream>

namespace IO {
    class Handler {

    public:
        char delimiter = '\32';
        std::string placeholder = "------------";

        explicit Handler() = default;

        template<typename ...Args>
        int writeToConsole(Args const &...args);

        int writeToConsole(std::string m, bool endl = true);

        std::string fromConsole();

        void flush();

        template<typename ...Args>
        std::string concatenate(Args const &...args);

    private:
        int numberOfCharsInString(std::string string);
    };

    template<typename ...Args>
    std::string Handler::concatenate(Args const &...args) {
        std::ostringstream stream;
        using List= int[];
        (void) List{0, ((void) (stream << delimiter << args), 0) ...};

        return stream.str();
    }

    template<typename ...Args>
    int Handler::writeToConsole(Args const &...args) {
        writeToConsole(concatenate(args...));
        return 0;
    }
}


#endif //THE_WONDER_MAN_HANDLER_H
