

#include <string>

class Student {
public:
    Student();
    Student(char* name);
    Student(const Student& other);
    ~Student();
    Student& operator=(const Student& other);
    const std::string& GetName() const;
    void ChangeName(char* newName);
private:
    char* name;
    //std::string name;
};



Student::Student() : name() {;}

Student::Student(char* name)  {
    char *newName = new char[strlen(name) + 1];
    strcpy(newName, name);
    this->name = newName;
}

Student::Student(const Student& other) : name(other.name) {}

Student::~Student() {}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        name = other.name;
    }
    return *this;
}

const std::string& Student::GetName() const {
    return name;
}

void Student::ChangeName(char* newName) {
    name = newName;
}
