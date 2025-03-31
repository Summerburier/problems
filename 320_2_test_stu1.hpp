
#include <string>
#include <cstring>

class Student {
public:
    Student();
    Student(const char* name);
    Student(const Student& other);
    ~Student();

    Student& operator=(const Student& other);

    std::string GetName() const;
    void ChangeName(const char* new_name);

private:
    char name[20];
    //std::string name;
};

