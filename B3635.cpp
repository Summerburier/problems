#include<bits/stdc++.h>
using namespace std;
int n;
int f[1000010];//储存答案
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f[i]=1+f[i-1];
        if(i>=5)
            f[i]=min(f[i],1+f[i-5]);
        if(i>=11)
            f[i]=min(f[i],1+f[i-11]);//寻找所有方案中的最优解
    }
    cout<<f[n]; 
    return 0;
}