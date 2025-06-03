#include<bits/stdc++.h>
using namespace std;

template <typename T>

void swapValues(T &a, T &b) {

    T temp = a;

    a = b;

    b = temp;

}

 

class Point{

private:

    float x,y;

public:

    Point(float x=0, float y=0) : x(x), y(y) {}

    friend ostream& operator<<(ostream &os, const Point &p) {

        os << "(" << p.x << "," << p.y << ")";

        return os;

    }

    friend void swapValues(Point &a, Point &b) {

        Point temp = a;

        a = b;

        b = temp;

    }

};

 

 

int main() {

    int i1 = 10, i2 = 20;

    swapValues(i1, i2);

    cout << "i1=" << i1 << ", i2=" << i2 << endl;

   

    double d1 = 3.14, d2 = 6.28;

    swapValues(d1, d2);

    cout << "d1=" << d1 << ", d2=" << d2 << endl;

   

    Point p1(1,3), p2(5,3);

    swapValues(p1, p2);

    cout << "p1: " << p1 << ", p2: " << p2 << endl; 

   

    return 0;

}