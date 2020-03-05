//
// Created by vibhatha on 3/4/20.
//

#include <pybind11/pybind11.h>
#include "mpi.h"
#include "stdio.h"

using namespace std;

int add(int i, int j) {
    return i + j;
}

int multiply(int i, int j) {
    return i * j;
}

float divide(int i, int j) {

    return i / (float) j;
}

namespace py = pybind11;

PYBIND11_MODULE(pybind_example, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: pybind_example

        .. autosummary::
           :toctree: _generate

           add
           subtract
           multiply
           divide
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

    m.def("multiply", &multiply, R"pbdoc(
        Multiply two numbers

        Some other explanation about the multiply function.
    )pbdoc");

    m.def("divide", &divide, R"pbdoc(
        Divide two numbers

        Some other explanation about the divide function.
    )pbdoc");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers

        Some other explanation about the subtract function.
    )pbdoc");

#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}
