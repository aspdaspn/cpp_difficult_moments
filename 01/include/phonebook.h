#pragma once
#include "person.h"
#include "phonenumber.h"
#include <vector>
#include <tuple>

class PhoneBook {
    private:
        std::vector<std::pair<Person, PhoneNumber>> m_data;
    public:
        PhoneBook(std::ifstream& file);
        void SortByName();
        void SortByPhone();
        std::tuple<std::string, PhoneNumber> GetPhoneNumber(const std::string &surname);
        void ChangePhoneNumber(const Person &person, const PhoneNumber &phonenumber);
        friend std::ostream& operator<< (std::ostream &out, const PhoneBook &PhoneBook);
};

