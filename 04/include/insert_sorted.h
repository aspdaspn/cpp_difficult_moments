#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

template <class T, class CONTAINER>
void insert_sorted(CONTAINER &container, const T insertion) {
    typename CONTAINER::iterator it;
    it = std::upper_bound(container.begin(), container.end(), insertion);
    container.insert(it, insertion);
}

template <class CONTAINER>
void printContainer(const CONTAINER &container) {
    for (auto i: container)
        std::cout << i << " ";
    std::cout << std::endl;
}
