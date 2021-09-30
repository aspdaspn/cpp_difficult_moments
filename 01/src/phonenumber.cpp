#include "phonenumber.h"
#include <iostream>
#include <tuple>

PhoneNumber::PhoneNumber(const uint16_t  country_code, const uint16_t city_code,
    const std::string number, const std::optional<uint16_t> extension_number):
    m_country_code(country_code), m_city_code(city_code), m_number(number),
    m_extension_number(extension_number) {}

bool PhoneNumber::operator< (const PhoneNumber &phone_number) const {
    return std::tie(m_country_code, m_city_code, m_number, m_extension_number) <
    std::tie(phone_number.m_country_code, phone_number.m_city_code,
    phone_number.m_number, phone_number.m_extension_number);
}

std::ostream& operator<< (std::ostream &out, const PhoneNumber &phone_number) {
    out << "+" << phone_number.m_country_code << "(" << phone_number.m_city_code << ")" <<
    phone_number.m_number << " ";
    if (phone_number.m_extension_number.has_value())
        out << phone_number.m_extension_number.value();
    return out;
}
