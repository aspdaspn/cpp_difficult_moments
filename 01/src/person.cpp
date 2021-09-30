#include "person.h"
#include <iostream>
#include <iomanip>
#include <tuple>

bool Person::operator< (const Person &person) const {
    return std::tie(m_name, m_surname, m_patronymic) < 
        std::tie(person.m_name, person.m_surname, person.m_patronymic);
}
    
bool Person::operator== (const Person &person) const {
    return std::tie(m_name, m_surname, m_patronymic) == 
        std::tie(person.m_name, person.m_surname, person.m_patronymic);
}

bool Person::operator== (const std::string &str) const {
    return m_surname == str;
}

std::ostream& operator<< (std::ostream& out, const Person &person) {
    return out << std::right << std::setw(10) << person.m_surname << " "
        << std::right << std::setw(10) << person.m_name << " "
        << std::right << std::setw(15) << person.m_patronymic;
}
