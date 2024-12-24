#include<bits/stdc++.h>
using namespace std;
#define drink 20000
#define pie 3.14
int main(){
    int h,r;
    float v,num;
    cin>>h>>r;
    v=pie*pow(r,2)*h;
    num=ceil(drink/v);
    cout<<num;
    return 0;

}