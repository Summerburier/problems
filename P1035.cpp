#include<iostream>
using namespace std;

int k,c=1;
double s=0;
int main()
{
    cin>>k;
    while(true)
    {
        s+=1.0/c;
        if(s>k)
            break;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
