#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>

void VowelCounterCifFind(std::ifstream &file, int64_t &counter) {
    const std::string vowels("AEIOUaeiou");
    for(std::string word; file >> word;)
        counter += std::count_if(word.begin(), word.end(), 
                [&vowels] (const char &ch) {return vowels.find(ch) != std::string::npos;});
}

void VowelCounterCifFor(std::ifstream &file, int64_t &counter) {
    const std::string vowels("AEIOUaeiou");
    for (std::string word; file >> word;) {
        counter += std::count_if(word.begin(), word.end(),
                [&vowels] (const char &ch) {
                    for (char vowel: vowels)
                        if (vowel == ch)
                            return true;
                    return false;
                });
    }
}

void VowelCounterForFind(std::ifstream &file, int64_t &counter) {
    const std::string vowels("AEIOUaeiou");
    for (char ch; file.get(ch);) {
        const auto got = vowels.find(ch);
        if (got != std::string::npos)
            ++counter;
    }
}

void VovelConterForFor(std::ifstream &file, int64_t &counter) {
    for (std::string word; file >> word;)
        for(char ch : word) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                ++counter;
        }
}


void PrintCounter(int64_t &counter) {
    std::cout << "Total vowel characters:\t" << counter << std::endl;
}
