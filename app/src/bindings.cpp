#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "../include/tournament.hpp"

template<typename T>
void bind_Range(pybind11::module_& m, const std::string& type_name) {
    pybind11::class_<Range<T>>(m, type_name.c_str())
    .def(pybind11::init<>())
    .def_readwrite("min", &Range<T>::min)
    .def_readwrite("max", &Range<T>::max)
    .def("isInRange", &Range<T>::isInRange);
}

PYBIND11_MODULE(ProjectDrabinka, m) {
    m.doc() = "Project Drabinka backend";
    // Range struct binding
    bind_Range<unsigned short>(m, "RangeUnShort");

    // Tournament class binding
    pybind11::class_<Tournament>(m, "Tournament")
    .def(pybind11::init<std::string>())
    .def("getAllParticipants", &Tournament::getAllParticipants, "Gets participants as a dictionary")
    .def("addCategory", &Tournament::addCategory, "Adds a category")
    .def("getCategoryByCode", &Tournament::getCategoryByCode);

    // Category class binding
    pybind11::class_<Category>(m, "Category")
    .def(pybind11::init<std::string, Range<unsigned short>, Range<unsigned short>, Sex>());

    // Sex enum class binding
    pybind11::enum_<Sex>(m, "Sex")
    .value("MAN", Sex::MAN)
    .value("WOMAN", Sex::WOMAN)
    .export_values();

    // Participant class binding
    pybind11::class_<Participant>(m, "Participant")
    .def(pybind11::init<unsigned short, std::string, std::string, unsigned short, unsigned short, Sex>())
    .def("getID", &Participant::getID, "Gets ID")
    .def("getFirstName", &Participant::getFirstName, "Gets first name")
    .def("getLastName", &Participant::getLastName, "Gets last name")
    .def("getName", &Participant::getName, "Gets full name")
    .def("getAge", &Participant::getAge, "Gets age")
    .def("getWeight", &Participant::getID, "Gets weight")
    .def("getSex", &Participant::getSex, "Gets sex");
}