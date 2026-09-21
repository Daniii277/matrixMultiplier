#include <gtest/gtest.h>

#include "../include/matrix/matrix.hpp"

TEST(MatrixTest, Construction)
{
    Matrix matrix(3, 4);

    EXPECT_EQ(matrix.numRows(), 3);
    EXPECT_EQ(matrix.numCols(), 4);
}