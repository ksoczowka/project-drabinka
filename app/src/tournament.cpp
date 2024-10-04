#include "../include/tournament.hpp"

#include <fstream>

Tournament::Tournament(const std::string& path) {
    getParticipantsFromFile(path);
}

void Tournament::getParticipantsFromFile(const std::string& path) {
    std::ifstream file(path);
    if(!file.is_open()) {
        throw std::runtime_error("Could not open file : " + path + '\n');
    }
    
    while(!file.eof()) {
        std::pair<unsigned short, std::array<std::string, 5>> temp;

        file >> temp.first;
        for(auto i = 0; i < 5; i++) {
            file >> temp.second[i];
        }

        participants.insert(temp);
    }
}
