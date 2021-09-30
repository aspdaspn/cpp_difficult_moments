#include "phonebook.h"
#include <iostream>
#include <fstream>
#include <optional>
#include <sstream>
#include <string>
#include <tuple>
#include <algorithm>

PhoneBook::PhoneBook(std::ifstream &file) {
    if (!file.is_open())
        std::cout << "Error reading file!" << std::endl;

    std::string line;
    while (std::getline(file, line)) {
        std::string name, surname, patronymic, number, extension_number;
        uint16_t country_code, city_code;
        std::istringstream ss(line);
        ss >> surname >> name >> patronymic >> country_code >> city_code >> number >> extension_number;
        std::optional<uint16_t> o_extension_number;

        if (patronymic == "-")
            patronymic = "";

        if (extension_number == "-")
            o_extension_number = std::nullopt;
        else
            o_extension_number = std::stoi(extension_number);

        m_data.push_back(std::make_pair(Person(surname, name, patronymic), PhoneNumber(country_code, city_code, number, o_extension_number)));
    }
    file.close();
}

void PhoneBook::SortByName() {
    std::sort(m_data.begin(), m_data.end(), [](const std::pair<Person, PhoneNumber> &pair1,
        const std::pair<Person, PhoneNumber> &pair2) {return pair1.first < pair2.first;});
}

void PhoneBook::SortByPhone() {
    std::sort(m_data.begin(), m_data.end(), [](const std::pair<Person, PhoneNumber> &pair1,
        const std::pair<Person, PhoneNumber> &pair2) {return pair1.second < pair2.second;});
}

std::tuple<std::string, PhoneNumber> PhoneBook::GetPhoneNumber(const std::string &surname) {
    PhoneNumber phone_number;
    int16_t counter = 0;

    auto find_surname = [surname, &counter, &phone_number](const std::pair<Person, PhoneNumber> &pair1) {
        if (pair1.first == surname) {
            ++counter;
            phone_number = pair1.second;
        }
    };

    std::for_each(m_data.begin(), m_data.end(), find_surname);

    std::string output = "";
    if (!counter)
        output = "entry not found";
    else if (counter > 1)
        output = "several entries";
    return {output, phone_number};
}

void PhoneBook::ChangePhoneNumber(const Person &person, const PhoneNumber &phone_number) {
    auto find_person = [&person](const std::pair<Person, PhoneNumber> &pair1) {return pair1.first == person;};
    auto output = std::find_if(m_data.begin(), m_data.end(), find_person);
    if (output != m_data.end())
        output->second = phone_number;
}

std::ostream& operator<< (std::ostream &out, const PhoneBook &phone_book) {
    for (auto [first, second]: phone_book.m_data)
        std::cout << first << " " << second << std::endl;
    return out;
}
