#include <iostream>
#include "helpers.h"

template<typename T>
void Swap(const T *&p1, const T *&p2) {
    const T *temp = p2;
    p2 = p1;
    p1 = temp;
}

template<typename T>
void SortPointers(std::vector<T*> &ptr_array) {
    size_t size = ptr_array.size();
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - 1; ++j)
            if (*ptr_array[j] > *ptr_array[j + 1])
                Swap(ptr_array[j], ptr_array[j + 1]);
    }
}


template<typename T>
void PrintVector(const std::vector<T*> &ptr_array) {
    for (auto vptr: ptr_array)
        std::cout << *vptr << " ";
    std::cout << std::endl;
}
