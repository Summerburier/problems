#include<bits/stdc++.h>
using namespace std;
int sun,mom=0;
int b,c=0;
int a=0;
void su(int x){
    int sum=0;
    int i=0;
    while(sum<x){
        i++;
        sum+=i;
    }
    mom=i-(sum-x);
    sun=i+1-mom;
}

int main(){
    cin>>a;
    su(a);
    cout<<sun<<"/"<<mom;
    return 0;
    
}