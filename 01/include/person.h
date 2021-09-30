/**
 * Class Person
 *
 * Создайте структуру Person с 3 полями: фамилия, имя, отчество. Поле отчество должно быть
 * опционального типа, т.к. не у всех людей есть отчество. Перегрузите оператор вывода данных
 * для этой структуры. Также перегрузите операторы < и == (используйте tie).
 */

#pragma once

#include <ostream>
#include <string>

class Person {
    private:
        std::string m_name, m_surname, m_patronymic;
    public:
        Person(std::string surname, std::string name, std::string patronymic = ""):
            m_name(name), m_surname(surname), m_patronymic(patronymic) {}
        bool operator< (const Person &person) const;
        bool operator== (const Person &person) const;
        bool operator== (const std::string &str) const;
        friend std::ostream& operator << (std::ostream& out, const Person &person);
};
