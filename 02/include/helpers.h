#pragma once
#include <vector>

/**
 * Header file with helping functions
 */

//
// This function swaps two given pounters
//
template <typename T>
void Swap(const T *&p1, const T *&p2);

//
// This function sorts pointers based on their values
//
template <typename T>
void SortPointers(std::vector<T*> &ptr_array);

//
// This function prints vector
//
template <typename T>
void PrintVector(const std::vector<T*> &ptr_array);
