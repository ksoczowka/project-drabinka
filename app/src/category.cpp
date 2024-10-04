#include "../include/category.hpp"

Category::Category(const std::string& code, Range<unsigned short> ageRange, Range<unsigned short> weightRange, Sex sexCategory) 
                    : code_(code), ageRange_(ageRange), weightRange_(weightRange), sexCategory_(sexCategory) {

}