#include<bits/stdc++.h>
using namespace std;
class X{
    int r;
    int b;
    public:
    X(int i,int j):b(i),r(b%j) {}
       
    void display(){
        cout<<r<<" "<<b<<endl;
    }
};
int main(){
    X obj(100,7);
    obj.display();
    return 0;
}