#include "main.h"

template <typename T>
void printUnique(T begin, T end) {
    std::set <std::string> str;
    copy (begin, end, inserter(str, str.end()));
    copy (str.begin(), str.end(), std::ostream_iterator<std::string>(std::cout, ", "));
}

int main(int argc, char** args) {
    std::cout << "Exercise 1" << std::endl;
    std::vector <std::string> words {
        "cat",
        "dog",
        "unicorn",
        "cat",
        "mouse"
    };
    printUnique(words.begin(), words.end());
    std::cout << std::endl;

    std::list<std::string> numbers {
        "two",
        "five",
        "one",
        "seven",
        "one"
    };
    printUnique(numbers.begin(), numbers.end());
    std::cout << std::endl;

    std::cout << "Execise 2" << std::endl;
    std::multimap<int, std::string> mm_str;
    std::string input_text;
    const std::string splitter = ".!?";
    std::cout << "Input Text: ";
    std::getline(std::cin, input_text);
    while (!input_text.empty()) {
        const size_t pos = input_text.find_first_of(splitter);
        std::string temp = input_text.substr(0, pos);
        input_text.erase(0, pos + 1);
        const auto key = std::count_if(temp.begin(), temp.end(),[](const char ch) {return isspace(ch);});
        mm_str.emplace(key, temp);
    }
    std::for_each (mm_str.begin(), mm_str.end(), [](const std::pair<int, std::string> &str) 
            {std::cout << str.second << std::endl;});
    return EXIT_SUCCESS;
}
