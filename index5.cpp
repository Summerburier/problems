#include<bits/stdc++.h>
using namespace std;


class MyString {

    private:
    
        char* str;  // 动态分配字符数组
    
        int length;
    
    public:
    
        MyString(const char* s = "") {
    
            length = strlen(s);
    
            str = new char[length + 1];  // +1 用于存放 '\0'
    
            strcpy(str, s);
    
        }
    
        MyString(const MyString& other) {
    
            length = other.length;
    
            str = new char[length + 1];
    
            strcpy(str, other.str);
    
        }
    
        ~MyString() {
    
            delete[] str;
    
        }
    
        
    
        MyString operator+(const MyString& other);
    
        MyString& operator=(const MyString& other);

        MyString operator+=(const MyString& other) {
    
            *this = *this + other;  // 使用重载的 + 运算符
    
            return *this;
    
        }

        bool operator<(const MyString& other);

        bool operator>(const MyString& other);
    
        char& operator[](int index);
    
        friend ostream& operator<<(ostream& os, const MyString& s);
    
    };
    
MyString MyString::operator+(const MyString& other) {
    
        MyString result;
    
        result.length = length + other.length;
    
        result.str = new char[result.length + 1];  // +1 用于存放 '\0'
    
        strcpy(result.str, str);
    
        strcat(result.str, other.str);
    
        return result;
    
    }
MyString & MyString::operator=(const MyString& other) {
    
        if (this != &other) {  // 防止自赋值
    
            delete[] str;  // 释放原有内存
    
            length = other.length;
    
            str = new char[length + 1];  // +1 用于存放 '\0'
    
            strcpy(str, other.str);
    
        }
    
        return *this;
    
    }  

bool MyString::operator<(const MyString& other) {
    
        return strcmp(str, other.str) < 0;
    
    }
bool MyString::operator>(const MyString& other) {
    
        return strcmp(str, other.str) > 0;
    
    }

char& MyString::operator[](int index) {
    
        if (index < 0 || index >= length) {
    
            throw out_of_range("Index out of range");
    
        }
    
        return str[index];
    
    }
ostream& operator<<(ostream& os, const MyString& s) {
    
        os << s.str;
    
        return os;
    
    }
  
    int main() {
    
        MyString s1("Hello");
    
        MyString s2("World");
    
        
    
        MyString s3 = s1 + " " + s2;  // 拼接
    
        cout << "s3 = " << s3 << endl; // 输出: Hello World
    
        
    
        MyString s4;
    
        s4 = s3;
    
        cout << "s4 = " << s4 << endl; // 输出: Hello World
    
        
    
        s4[0] = 'h';  
    
        cout << "s4[0] = " << s4[0] << endl;  // 输出: h
    
        cout << "s4 = " << s4 << endl;        // 输出: hello World
    
        cout << "s4 > s3 = " << (s4 > s3) << endl;

        cout << "s4 < s3 = " << (s4 < s3) << endl;

        cout << "s3 += s1 = " << (s3 += s1) << endl; // 输出: Hello WorldHello
    
        return 0;
    
    }