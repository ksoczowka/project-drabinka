#pragma once

#include "category.hpp"

#include <array>
#include <map>
#include <string>

/**
 * @class Tournament
 * @brief Main class with all tools for easy tournament handling
 */
class Tournament {
using participantsMap =  std::map<unsigned short, Participant>;
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
    participantsMap getAllParticipants() { return participants_; }

    /**
     * @brief Adds new Category to the map
     * @param code category code
     * @param ageRange range of age using Range<T>
     * @param weightRange range of weight using Range<T>
     * @param sexCategory sex category
     */
    void addCategory(const std::string& code, Range<unsigned short> ageRange, Range<unsigned short> weightRange, Sex sexCategory);

    std::map<std::string, Category> getCategories() { return categories_; }
    Category getCategoryByCode(const std::string& code) { return categories_.at(code); }
private:
    participantsMap participants_; ///< Map of all participants
    std::map<std::string, Category> categories_; ///< Map of all categories

    /**
     * @brief Helper function to get participants from file (don't use)
     * @param path Path to file with data in .tsv file format
     */
    void getParticipantsFromFile(const std::string& path);
};
