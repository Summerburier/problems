#include<iostream>
#include<fstream>
using namespace std;

bool isPrime(int n)
{
    if(n<2)return 0;
    bool res=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)res=0;
    }
    return res;
}
int main()
{
    ofstream fout("E:\\prime.txt");
    int count=0;
    for(int i=2;i<=2000;i++) {
        if (isPrime(i)) {
            fout << i;
            count++;
            if (count%10== 0)
            {fout << endl;}
            else{fout<<",";}
        }
    }
    fout.close();
    ifstream fin("E:\\prime.txt");
    int x;char ch;int sum=0;
    while(fin>>x)
    {
        cout<<x<<",";
        fin.get(ch);
        sum+=x;
    }
    cout<<endl<<sum<<endl;
}

/* if(x=='\n'){cout<<endl;}
        else{cout<<x;}
        if(x>='0'&&x<='9')
        {sum+=(x-'0');}*/