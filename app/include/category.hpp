#pragma once

#include "participant.hpp"
#include "range.hpp"

#include <string>
#include <vector>

class Category {
public:
    Category() = delete;
    Category(const std::string& code, Range<unsigned short> ageRange, Range<unsigned short> weightRange, Sex sexCategory);

    void addParticipant(Participant& participant);
private:
    std::string code_;
    Range<unsigned short> ageRange_;
    Range<unsigned short> weightRange_;
    Sex sexCategory_;

    std::vector<Participant> participants_;
};