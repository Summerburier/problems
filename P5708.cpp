#include<bits/stdc++.h>
using namespace std;
int main (){
    double a,b,c;
    cin>>a>>b>>c;
    double p=0.5*(a+b+c);
    printf("%.1lf",pow(p*(p-a)*(p-b)*(p-c),0.5));
    return 0;
}