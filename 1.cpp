#include <bits/stdc++.h>
using namespace std;


int main(){
    int a[10]={56,34,3,67,89,55,22,43,12,9};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    ofstream fout("E:\\sort.txt");
    fout.close();
    ifstream fin("E:\\sort.txt");
    for(int i=0;i<10;i++){
        fin>>a[i];
        cout<<a[i]<<" ";
    }

}