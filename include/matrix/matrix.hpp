#include <vector.h>


class Matrix{
    public:
        Matrix(std::size_t rows, std::size_t cols);
        std::size_t numCols();
        std::size_t numRows();
        

    private:
        int cols;
        int rows;
        std::vector<double> data;
}