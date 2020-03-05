//
// Created by vibhatha on 3/5/20.
//

#include "Matrix.h"
#include <iostream>
#include <random>

Matrix::Matrix(int rows_, int cols_) {
    rows = rows_;
    cols = cols_;
    data = new float[rows][cols];
}

float **Matrix::randInit() {
    const int range_from = 0.0;
    const int range_to = 1.0;
    random_device rand_dev;
    for (int i = 0; i < rows; ++i) {
        data[i] = new double[columns];
        for (int j = 0; j < columns; ++j) {
            mt19937 generator(rand_dev());
            uniform_real_distribution<float> distr(range_from, range_to);
            float val = distr(generator);
            data[i][j] = val;
        }
    }
    return data;
}