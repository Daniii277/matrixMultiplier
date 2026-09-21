#include <iostream>

#include "../include/matrix/matrix.hpp"

int main()
{
    Matrix matrix(2, 3);

    matrix(0, 0) = 1.0;
    matrix(0, 1) = 2.0;
    matrix(0, 2) = 3.0;

    matrix(1, 0) = 4.0;
    matrix(1, 1) = 5.0;
    matrix(1, 2) = 6.0;

    for (std::size_t row = 0; row < matrix.numRows(); ++row){
        for (std::size_t col = 0; col < matrix.numCols(); ++col){
            std::cout << matrix(row, col) << " ";
        }
        std::cout << '\n';
    }
}