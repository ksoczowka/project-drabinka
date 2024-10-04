#pragma once

#include <string>

enum class Sex {
    MAN,
    WOMAN
};

class Participant {
public:
    Participant(const unsigned int& id, const std::string& firstName, std::string& lastName, const unsigned short& age, const unsigned short& weight_, const Sex& sex);

    unsigned int getID() { return id_; }
private:
    unsigned int id_;
    std::string firstName_;
    std::string lastName_;
    unsigned short age_;
    unsigned short weight_;
    Sex sex_;
};