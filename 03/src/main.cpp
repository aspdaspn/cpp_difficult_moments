#include "main.h"

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
    return EXIT_SUCCESS;
}
