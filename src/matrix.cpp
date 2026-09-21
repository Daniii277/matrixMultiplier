#include "../include/matrix/matrix.hpp"

    Matrix::Matrix(std::size_t rows, std::size_t cols) : cols_(cols), rows_(rows), data_(cols * rows){ }

    std::size_t Matrix::numCols() const{
        return cols_;
    }

    std::size_t Matrix::numRows() const{
        return rows_;
    }

    double& Matrix::operator()(std::size_t rows, std::size_t cols){
        return data_[rows * cols_ + cols];
    }

    const double& Matrix::operator()(std::size_t rows, std::size_t cols) const{
        return data_[rows * cols_ + cols];
    }
