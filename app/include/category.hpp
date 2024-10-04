#pragma once

#include "participant.hpp"

#include <string>
#include <vector>

class Category {
public:
    Category(const std::string& code);

    void addParticipant(Participant& participant);
private:
    std::string code_;
    std::vector<Participant> participants_;
};