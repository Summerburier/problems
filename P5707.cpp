#include<bits/stdc++.h>
using namespace std;
int main(){
    int hour,minutes,num;
    float s,v,t;
    cin>>s>>v;
    t=s/v;
    t-(int)t==0?num=(int)t:num=(int)t+1;
    minutes=60-(num+10)%60;
    hour=(8-((num+10)/60)-1+24)%24;
    printf("%02d:%02d",hour,minutes);
    return 0;
}