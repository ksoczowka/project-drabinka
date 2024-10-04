#pragma once

#include <array>
#include <map>
#include <string>


class Tournament {
using participantsMap =  std::map<unsigned short int, std::array<std::string, 5>>;
public:
    Tournament() = delete;
    Tournament(const std::string& path);

    participantsMap getAllParticipants() { return participants; }
private:
    participantsMap participants;

    void getParticipantsFromFile(const std::string& path);
};
