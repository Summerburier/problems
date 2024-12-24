#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1 ,m1,h2,m2,tm1,tm2;
    cin>>h1>>m1>>h2>>m2;
    tm1=h1*60+m1;
    tm2=h2*60+m2;
    tm1=tm2-tm1;
    tm2=tm1%60;
    tm1/=60;
    printf("%d %d",tm1,tm2);
    return 0;

}