#include<bits/stdc++.h>
using namespace std;
int a[100000];

void QuickSortA(int a[],int low,int high)
{
    if(low>=high) return;//此时已经完成排序，直接返回
    int i = low;
    int j = high;
    int key = a[low];
    while(i<j)//实现第一趟排序
    {
        while(i<j&&key<a[j]) j--;//从右向左找比key小的值
        a[i] = a[j];
        while(i<j&&key>a[i]) i++;//从左向右找比key大的值
        a[j] = a[i];
    }
    a[i] = key;//将关键数据填入low=high的位置
    QuickSortA(a,low,i-1);//左边子序列递归排序
    QuickSortA(a,i+1,high);//右边子序列递归排序
}
void QuickSortB(int a[],int low,int high)
{
    if(low>=high) return;//此时已经完成排序，直接返回
    int i = low;
    int j = high;
    int key = a[low];
    while(i<j)//实现第一趟排序
    {
        while(i<j&&key>a[j]) j--;//从右向左找比key小的值
        a[i] = a[j];
        while(i<j&&key<a[i]) i++;//从左向右找比key大的值
        a[j] = a[i];
    }
    a[i] = key;//将关键数据填入low=high的位置
    QuickSortB(a,low,i-1);//左边子序列递归排序
    QuickSortB(a,i+1,high);//右边子序列递归排序
}





int main(){
    int N,L1,R1,L2,R2;
    cin>>N>>L1>>R1>>L2>>R2;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    QuickSortA(a,L1-1,R1-1);
    QuickSortB(a,L2-1,R2-1);
    for(int i=0;i<N;i++){
        cout<<a[i]<<" ";
    }
}
