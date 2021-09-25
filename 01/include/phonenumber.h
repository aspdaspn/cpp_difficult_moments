/**
 * Создайте структуру PhoneNumber с 4 полями:
 * · код страны (целое число)
 * · код города (целое число)
 * · номер (строка)
 * · добавочный номер (целое число, опциональный тип)
 * Для этой структуры перегрузите оператор вывода. Необходимо, чтобы номер телефона
 * выводился в формате: +7(911)1234567 12, где 7 – это номер страны, 911 – номер города,
 * 1234567 – номер, 12 – добавочный номер. Если добавочного номера нет, то его выводить не
 * надо.
 */

#pragma once
#include <string>
#include <optional>

class PhoneNumber {
    private:
        uint16_t m_country_code;
        uint16_t m_city_code;
        std::string m_number;
        std::optional <uint16_t> m_extension_number;
    public:
        PhoneNumber(): m_country_code(0), m_city_code(0), m_extension_number(std::nullopt){}
        PhoneNumber(uint16_t country_code, uint16_t city_code, std::string number,
                std::optional <uint16_t> extension_number);
        bool operator< (const PhoneNumber &phone_number) const;
        friend std::ostream& operator<< (std::ostream &out, const PhoneNumber &phone_number);
};
