#include <vector>
#include <cstddef>

class Matrix{
    public:
        Matrix(std::size_t rows, std::size_t cols);
        std::size_t numCols() const;
        std::size_t numRows() const;
        double& operator()(std::size_t rows, std::size_t cols);
        const double& operator()(std::size_t rows, std::size_t cols) const;


    private:
        std::size_t cols_;
        std::size_t rows_;
        std::vector<double> data_;
};