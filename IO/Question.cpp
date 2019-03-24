//
// Created by James Parker on 2019-03-22.
//

#include "Question.h"

IO::Question::Question(IO::Handler *handler) : Helper(handler) {}

void IO::Question::display() {
    handler->writeToConsole(question);
    answer = handler->fromConsole();
}

template<>
std::string IO::Question::getAnswer() {
    return answer;
}

template<>
int IO::Question::getAnswer() {
    return std::stoi(answer);
}

template<>
double IO::Question::getAnswer() {
    return std::stod(answer);
}

template<>
float IO::Question::getAnswer() {
    return std::stof(answer);
}

void IO::Question::setQuestion(const std::string &question) {
    this->question = question;
}