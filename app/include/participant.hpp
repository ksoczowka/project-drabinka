#pragma once

#include <string>

enum class Sex {
    MAN,
    WOMAN
};

/**
 * @class Participant
 * @brief Class that handles operations regarding participants
 */
class Participant {
public:
    Participant() = delete;
    /**
     * @brief Constructor with all fields
     * @param id ID of the participant
     * @param firstName First name of the participant
     * @param lastName Last name of the participant
     * @param age Age of the participant
     * @param weight Weight of the participant
     * @param sex Sex of the participant taken from Sex enum
     */
    Participant(const unsigned int& id, const std::string& firstName, const std::string& lastName, const unsigned short& age, const unsigned short& weight, const Sex& sex);

    /**
     * @brief Gets ID
     * @return ID of the participant
     */
    unsigned int getID() { return id_; }
    /**
     * @brief Gets first name 
     * @return first name of the participant
     */
    std::string getFirstName() { return firstName_; }
    /**
     * @brief Gets last name
     * @return last name of the participant
     */
    std::string getLastName() { return lastName_; }
    /**
     * @brief Gets Name
     * @return first name and last name combined in one string
     */
    std::string getName() { return firstName_ + " " + lastName_; }
    /**
     * @brief Gets age
     * @return age of the participant
     */
    unsigned short getAge() { return age_; }
    /**
     * @brief Gets weight
     * @return weight of the participant
     */
    unsigned short getWeight() { return weight_; }
    /**
     * @brief Gets sex
     * @return Sex of the participant taken from Sex enum
     */
    Sex getSex() { return sex_; }
private:
    unsigned int id_;
    std::string firstName_;
    std::string lastName_;
    unsigned short age_;
    unsigned short weight_;
    Sex sex_;
};