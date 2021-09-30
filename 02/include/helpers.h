#pragma once
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>

/**
 * Header file with helping functions
 */

//
// This function swaps two given pounters
//
template <typename T>
void Swap(T &p1, T &p2) {
    const T temp = p2;
    p2 = p1;
    p1 = temp;
}

//
// This function sorts pointers based on their values
//
template <typename T>
void SortPointers(std::vector<T*> &ptr_array) {
    size_t size = ptr_array.size();
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - 1; ++j)
            if (*ptr_array[j] > *ptr_array[j + 1])
                Swap(ptr_array[j], ptr_array[j + 1]);
    }
}

//
// This function prints vector
//
template <typename T>
void PrintVector(const std::vector<T*> &ptr_array) {
    for (auto vptr: ptr_array)
        std::cout << *vptr << " ";
    std::cout << std::endl;
}

//
// This function counts Vowels using count_if() and find()
//
void VowelCounterCifFind(std::ifstream &file, int64_t &counter) {
    const std::string vowels("AEIOUaeiou");
    for(std::string word; file >> word;)
        counter += std::count_if(word.begin(), word.end(), 
                [&vowels] (const char &ch) {return vowels.find(ch) != std::string::npos;});
}

//
// This function prints the number of Vowel characters
//

void PrintCounter(int64_t &counter) {
    std::cout << "Total vowel characters:\t" << counter << std::endl;
}
