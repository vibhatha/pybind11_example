//
// Created by vibhatha on 3/5/20.
//

#ifndef MATHXPB_MATRIX_H
#define MATHXPB_MATRIX_H

#include <iostream>
#include <random>

class Matrix {
private:
    int rows;
    int cols;
    float** data;

public:
    Matrix(int rows_, int cols_);
    float** randInit();
};


#endif //MATHXPB_MATRIX_H
