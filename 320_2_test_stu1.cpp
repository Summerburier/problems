#include <iostream>
#include <string>
#include <cstring>
#include"320_2_test_stu1.hpp"


Student::Student() : name() {}

Student::Student(const char* name)  {
    strcpy(this->name, name);
}

Student::Student(const Student& other) {
    strcpy(this->name, other.name);
}

Student::~Student() {}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        strcpy(this->name, other.name);
    }
    return *this;
}

std::string Student::GetName() const {
    return name;
}

void Student::ChangeName(const char* new_name) {
    strcpy(this->name, new_name);
}