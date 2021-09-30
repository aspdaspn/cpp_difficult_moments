#include "main.h"
#include "helpers.h"
#include "timer.h"
#include <fstream>

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

    std::for_each(ptr_array.begin(), ptr_array.end(), [](int *vptr){delete vptr;});

    std::cout << "Exercise 3" << std::endl;
    std::ifstream file ("../data/war_and_peace.txt");
    if (file.is_open()) {
        int64_t vowel_counter = 0;
        const Timer timerForCifFind("Count_If and Find");
        VowelCounterCifFind(file, vowel_counter);
        timerForCifFind.print();
        PrintCounter(vowel_counter);
        file.close();
        

    }


    return EXIT_SUCCESS;
}
