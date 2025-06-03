#include <bits/stdc++.h>
using namespace std;

template <typename T, int MAX_SIZE = 100>
class Stack {
private:
    T elements[MAX_SIZE];
    int topIndex;

public:
    Stack() : topIndex(-1) {}

    void push(const T &value) {
        if (topIndex == MAX_SIZE - 1) {
            cout << "Warning: Stack is full" << endl;
        } else {
            elements[++topIndex] = value;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Warning: Stack is empty" << endl;
        } else {
            topIndex--;
        }
    }

    T top() const {
        if (isEmpty()) {
            cout << "Warning: Stack is empty" << endl;
            return T(); // 返回默认值
        } else {
            return elements[topIndex];
        }
    }

    bool isEmpty() const {
        return topIndex == -1;
    }
};

int main() {
    Stack<int> intStack;
    Stack<string, 50> stringStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.push(40);

    cout << intStack.top() << endl;
    intStack.pop();
    cout << intStack.top() << endl;
    intStack.pop();
    cout << intStack.top() << endl;
    intStack.pop();
    cout << intStack.top() << endl;
    intStack.pop();
    cout << intStack.top() << endl; // 栈为空，返回默认值并打印警告
    intStack.pop();                // 栈为空，打印警告

    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("C++");

    cout << stringStack.top() << endl;
    stringStack.pop();
    cout << stringStack.top() << endl;
    stringStack.pop();
    cout << stringStack.top() << endl;
    stringStack.pop();
    cout << stringStack.top() << endl; // 栈为空，返回默认值并打印警告
    stringStack.pop();                // 栈为空，打印警告

    return 0;
}