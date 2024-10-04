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
        unsigned short id;
        std::string firstName;
        std::string lastName;
        unsigned short age;
        unsigned short weight;
        char sexChar;
        Sex sex;

        file >> id;
        file >> firstName;
        file >> lastName;
        file >> sexChar;
        sexChar == 'M' ? sex = Sex::MAN : sex = Sex::WOMAN;
        file >> age;
        file >> weight;
        

        participants_.insert(std::pair<unsigned short, Participant>(id, Participant(id, firstName, lastName, age, weight, sex)));
    }
}
