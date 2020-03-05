//
// Created by vibhatha on 3/5/20.
//

#include <pybind11/pybind11.h>
#include "Request.cpp"

namespace py = pybind11;

PYBIND11_MODULE(requestx, m) {
    py::class_<Request>(m, "Request")
            .def(py::init<const std::string &, int, std::string &>())
            .def("setName", &Request::setName)
            .def("getName", &Request::getName)
            .def("setMessage", &Request::setMessage)
            .def("getMessage", &Request::getMessage)
            .def("setBufSize", &Request::setBufSize)
            .def("getBufSize", &Request::getBufSize);

}

