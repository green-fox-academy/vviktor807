#include <iostream>

// - Create (dynamically) a two dimensional array
//   with the following matrix. Use a loop!
//   by dynamically, we mean here that you can change the size of the matrix
//   by changing an input value or a parameter or this combined

int main()
{
    int n = 4;

    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {

            if (i == j)
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
        }

    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j];
        }

        std::cout << std::endl;
    }

    return 0;
}