//
// Created by James Parker on 2019-03-22.
//

#ifndef THE_WONDER_MAN_QUESTION_H
#define THE_WONDER_MAN_QUESTION_H

#include "Handler.h"
#include "Helper.h"

namespace IO {

    class Question : public Helper {
    public:
        explicit Question(Handler *handler);

        void setQuestion(const std::string &question);

        template<typename T>
        T getAnswer();

        void display() override;

    private:
        std::string question;
        std::string answer;
    };
}


#endif //THE_WONDER_MAN_QUESTION_H
