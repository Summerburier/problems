#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int pp(const string& p)
{
    int res=0,i=0;
    while(p[i]!='=')
    {
        if(p[i]<='9'&&p[i]>='0')
        {
            int sum=p[i]-'0';
            while(p[i+1]<='9'&&p[i+1]>='0')
            {
                sum=sum*10+(p[++i]-'0');
            }
            res+=sum;
            i++;
            continue;
        }
        i++;
    }
    return res;
}

/*void test()
{
    string t="77+77+77=";
    int result=pp(t);
    cout<<result<<endl;

}*/

int main()
{
    //test();
    for (string s; getline(cin,s); )
    {
        istringstream sin(s);
        string t;
        while (sin>>t)
        {
            int result=pp(t);
            cout<<result<<endl;
        }

    }
    return 0;

}

