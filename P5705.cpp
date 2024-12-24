#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    cin>>num;
    int len = num.size();
    for(int i=len-1;i>=0;i--){
        cout<<num[i];
    }
    //记住用字符串的反转很方便
    //字符串和数组一样
    return 0;
}