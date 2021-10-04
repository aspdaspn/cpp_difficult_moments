#pragma once
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

class Matrix {
    private:
        std::vector<std::vector<int>> m_matrix;
        size_t m_size;
        int m_determinant;
        int Determinant(std::vector<std::vector<int>> matrix, size_t size) {
            if (size == 1)
                return matrix[0][0];
            if (size == 2)
                return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
            else {
                std::vector<std::vector<int>> minor;
                minor.assign(size-1, {0});
                std::for_each(minor.begin(), minor.end(), [size](std::vector<int> &m_rows) {
                m_rows.assign(size-1,0);});
                for(size_t k = 0; k < size; ++k) {
                    int a = 0;
                    for(size_t i = 1; i < size; ++i) {
                        int b = 0;
                        for(size_t j = 0; j < size; ++j) {
                            if (j != k) {
                                minor[a][b] = matrix[i][j];
                                ++b;
                            }
                        }
                        ++a;
                    }
                    m_determinant += static_cast<int>(pow(-1, k + 2)) * matrix[0][k] * Determinant(minor, size - 1);
                }
            return m_determinant;
            }
        }
    public:
        Matrix(std::vector<std::vector<int>> matrix): m_matrix(matrix), m_size(matrix.size()), m_determinant(0){};
        void PrintMatrix() const {
            std::for_each(m_matrix.begin(), m_matrix.end(), [](std::vector<int> m_rows) {
                std::for_each(m_rows.begin(), m_rows.end(), [] (int &val) {std::cout << std::setw(2) << val << " ";});
                std::cout << std::endl;
            });

        }
        int getDeterminant() {
            return Determinant(m_matrix, m_size);
        }
};
