#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,num;
    cin>>a>>b;
    float money=a+0.1*b;
    num=floor(money/1.9);
    cout<<num;
    return 0;
}