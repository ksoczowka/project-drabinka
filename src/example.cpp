#include <pybind11/pybind11.h>

#include <iostream>
#include <string>

int add(const int& a, const int& b) {
    return a + b;
}

PYBIND11_MODULE(simpleTestExtension, m) {
    m.doc() = "Simple Testing of the Extension";
    m.def("add", &add, "Add 2 numbers");
    
}