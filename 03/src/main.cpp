#include "main.h"
#include "matrix.h"
#include "iterator.h"

void VectorAveragePushBack(std::vector<double> &vd) {
    const double sum = std::accumulate(vd.begin(), vd.end(), 0.0);
    vd.push_back(sum/vd.size());
}

int main(int argc, char** args) {
    std::cout << "Exercise 1" << std::endl;
    std::vector<double> vd {-3.2, 5.7, 6.1, 0.1, 8.9};
    VectorAveragePushBack(vd);
    std::cout << "v = { ";
    for (auto i: vd)
        std::cout << i << ", ";
    std::cout << "}; \n";

    std::cout << "Exercise 2" << std::endl;
    const size_t matrix_size = 4;
    std::vector<std::vector<int>> new_matrix(matrix_size);
    std::for_each(new_matrix.begin(), new_matrix.end(), [matrix_size] (std::vector<int> &m_rows){
            m_rows.assign(matrix_size, 0);
            std::generate(m_rows.begin(), m_rows.end(), [] () {return rand() % 6 - 2;});
            });

    Matrix m1(new_matrix);
    m1.PrintMatrix();
    std::cout << "Determinant: " << m1.getDeterminant() << std::endl;

    std::cout << "Exercise 3" << std::endl;
    for (auto i : inRange<int> {10, 20})
        std::cout << i << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
