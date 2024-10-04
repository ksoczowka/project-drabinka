#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "../include/tournament.hpp"

PYBIND11_MODULE(ProjectDrabinka, m) {
    m.doc() = "Project Drabinka backend";
    pybind11::class_<Tournament>(m, "Tournament")
    .def(pybind11::init<std::string>())
    .def("getAllParticipants", &Tournament::getAllParticipants, "Gets participants as a dictionary");
}