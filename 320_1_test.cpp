#include<bits/stdc++.h>
using namespace std;
class Clock{
    public:
    int h,m,s;
    Clock(int _h,int _m,int _s):h(_h),m(_m),s(_s){
        cout<<"Constructor called"<<endl;
    }
    Clock(const Clock &c){
        h=c.h;
        m=c.m;
        s=c.s;
        cout<<"Copy constructor called"<<endl;
    }
    Clock(string str){
        h=(str[0]-'0')*10+(str[1]-'0');
        m=(str[3]-'0')*10+(str[4]-'0');
        s=(str[6]-'0')*10+(str[7]-'0');
        cout<<"Constructor called"<<endl;
    }
    ~Clock(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    Clock c1(12,34,56);
    Clock c2=c1;
    Clock c3("12:34:56");
    return 0;
}