#include<bits/stdc++.h>
using namespace std;

int main (){
    int v,n;
    cin>>v>>n;
    long val[v+1]={0} ,level[v+1]={0},f[v+1]={0};
    for (int i=1;i<=n;i++){
        cin>>val[i]>>level[i];
    }
    for (int i=1;i<=n;i++){
        for (int l=v;l>0;l--){
            if(l-val[i]>0){
                f[l]=max(f[l],f[l-val[i]]+val[i]*level[i]);
            }
        }
    }
    cout<<f[v];
    return 0;
}