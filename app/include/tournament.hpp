#pragma once

#include <array>
#include <map>
#include <string>

/**
 * @class Tournament
 * @brief Main class with all tools for easy tournament handling
 */
class Tournament {
using participantsMap =  std::map<unsigned short, std::array<std::string, 5>>;
public:
    Tournament() = delete;
    /**
     * @brief Tournament class constructor
     * @param path Path to file with data in .tsv file format
     */
    Tournament(const std::string& path);

    /**
     * @brief Gets map with all participants
     * @return Returns a map with all participants
     */
    participantsMap getAllParticipants() { return participants; }
private:
    participantsMap participants; ///< Map with all participants

    /**
     * @brief Helper function to get participants from file (don't use)
     * @param path Path to file with data in .tsv file format
     */
    void getParticipantsFromFile(const std::string& path);
};
