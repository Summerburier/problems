#include<bits/stdc++.h>
using namespace std;
int x[10];
int hight=1;
int sum=0;
int main(){
    for(int i=0 ;i<10;i++){
        cin>>x[i];
    }
    cin>>hight;
    for(int i=0 ;i<10;i++){
        if(x[i]<=hight+30){
            sum+=1;
           
        }
    }
    cout<<sum;
    return 0;
}