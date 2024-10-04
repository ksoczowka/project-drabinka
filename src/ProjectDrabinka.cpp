#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <array>
#include <fstream>
#include <iostream>
#include <map>
#include <string>

using dataType =  std::map<unsigned short int, std::array<std::string, 5>>;

dataType dataFromFileToMap(const std::string& pathToFile) {
    std::ifstream file(pathToFile);
    if(!file.is_open()) {
        throw std::runtime_error("Could not open file : " + pathToFile + '\n');
    }

    dataType returnMap;
    
    while(!file.eof()) {
        std::pair<unsigned short int, std::array<std::string, 5>> temp;

        file >> temp.first;
        for(auto i = 0; i < 5; i++) {
            file >> temp.second[i];
        }

        returnMap.insert(temp);
    }

    return returnMap;
}



PYBIND11_MODULE(ProjectDrabinka, m) {
    m.doc() = "Project Drabinka backend";
    m.def("getDataFromFile", &dataFromFileToMap, "Gets data from file and returns it to dictionary");
}