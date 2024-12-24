#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{
    return a+b>b+a;
}
int main()
{
    int n;
    string str[20];
    int i;
 
    cin>>n;
    for(i=0;i<n;i++)
        cin>>str[i];
 
    sort(str,str+n,cmp);//按拼接后最大排序
 
    for(i=0;i<n;i++)
        cout<<str[i];
    return 0;
}
