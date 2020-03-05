//
// Created by vibhatha on 3/5/20.
//

#include <pybind11/pybind11.h>
#include "mathx.h"

namespace py = pybind11;

PYBIND11_MODULE(mathxpb, m) {
m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: mathxpb

        .. autosummary::
           :toctree: _generate

           add
           subtract
           multiply
           divide
    )pbdoc";

    py::class_<mathx>(m, "mathxpb")
            .def("add1", &mathx::add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");


m.def("add", &mathx::add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

m.def("multiply", &mathx::multiply, R"pbdoc(
        Multiply two numbers

        Some other explanation about the multiply function.
    )pbdoc");

m.def("divide", &mathx::divide, R"pbdoc(
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
