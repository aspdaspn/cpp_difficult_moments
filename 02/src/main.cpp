#include "main.h"
#include "helpers.h"
#include "timer.h"

#define ARR_SIZE 10

int main(int argc, char** args) {
    std::cout << "Exercise 1 and 2" << std::endl;
    std::vector<int*> ptr_array;

    for (size_t i = 0; i < ARR_SIZE; ++i) {
        int *vptr = new int;
        *vptr = rand() % 100;
        ptr_array.push_back(vptr);
    }

    PrintVector(ptr_array);
    SortPointers(ptr_array);
    PrintVector(ptr_array);


    return EXIT_SUCCESS;
}
