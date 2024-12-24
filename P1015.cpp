#include<bits/stdc++.h>
using namespace std;


inline bool panduan(int c[], int k)
{
    int i=1;
    int j=k;
    while(i<j)
    {
        if(c[i]!=c[j])//判断首尾是否相同
            return 0;
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}


int main()
{
    int n;
    cin >> n;
    char m[150];
    static int a[5005][5005];//所开的二维数组
    int b[5005];//保存取反的数组
    cin >> m;
    int ans = 1;
    int lenm = strlen(m);
    //转为真实的数值
    for(int i=1;i<=lenm;i++)
    {
        if(m[i-1]>='A')
             a[1][i] = m[i-1]-55;
        else
            a[1][i] = m[i-1]-48;
    }
    int i=1;
    while(ans<=30)
    {
        int k = lenm;
        for(int j=1;j<=lenm;j++)//取反保存
        //（这里不需要按位拆开的算法了，因为这里直接用数组保存）
        {
            b[k--] = a[i][j];
        }
        
        //高精度加法
        for(int j=1;j<=lenm;j++)
        {
            a[i+1][j] = a[i+1][j]+a[i][j]+b[j];
            if(a[i+1][j]>=n)
            {
                a[i+1][j+1] += a[i+1][j]/n;//进位
                a[i+1][j] = a[i+1][j]%n;//保留低位
            }
        }
        while(a[i+1][lenm+1]>0)lenm++;//如果在最高位上发生了进位，则长度+1
        if(panduan(a[i+1], lenm))//判断是否为回文数
        //这里直接将二维数组的一行输入，所以在函数中可以直接当作一维数组来判断
        {
            printf("STEP=%d",ans);
            break;
        }
        else
        {
            i++;
            ans++;
        }
    }
    if(ans>30)
        printf("Impossible!");
    return 0;//庄严结尾
}
