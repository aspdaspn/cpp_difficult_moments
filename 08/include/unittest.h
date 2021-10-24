#pragma once
#include <gtest/gtest.h>
#include <memory>
#include "person.h"
#include "phonenumber.h"
#include "phonebook.h"

class TestEntry : public testing::Test {
public:
    void SetUp() override {
        person = std::make_unique<Person>("Mustermann", "Max");
        number = std::make_unique<PhoneNumber>(123, 45, "6789012", 34);
    }
    std::unique_ptr<Person> person;
    std::unique_ptr<PhoneNumber> number;
};

TEST_F(TestEntry, Name) {
    std::cout << "Name test ASSERT_STREQ:" << std::endl;
    ASSERT_STREQ(person -> GetName().c_str(), "Max");
}

TEST_F(TestEntry, Surname) {
    std::cout << "Surname test ASSERT_STREQ:" << std::endl;
    ASSERT_STREQ(person -> GetSurname().c_str(), "Mustermann");
}
