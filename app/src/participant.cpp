#include "../include/participant.hpp"

Participant::Participant(const unsigned int& id, const std::string& firstName, std::string& lastName, const unsigned short& age, const unsigned short& weight, const Sex& sex)
                        : id_(id), firstName_(firstName), lastName_(lastName), age_(age), weight_(weight), sex_(sex) {

}