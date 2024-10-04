#pragma once

#include <string>

class Category {
public:
    Category(const std::string& code);

    void addParticipant();
private:
    std::string code_;
};