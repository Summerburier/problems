
#include<bits/stdc++.h>
// 填上你觉得需要的其他头文件
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        
        
        cout<<3<<endl;
        cout<<12<<endl;
        cout<<2<<endl;
    } else if (T == 4) {
        
        printf("166.667");
    } else if (T == 5) {
        cout<<15;
    } else if (T == 6) {
        cout<<pow(6*6+9*9,0.5);
    } else if (T == 7) {
        cout<<110<<endl;
        cout<<90<<endl;
        cout<<0<<endl;
    } else if (T == 8) {
        int r=5;
    double pi=3.141593;
    cout<<2*pi*r<<endl;
    cout<<r*r*pi<<endl;
    cout<<4.0/3*pi*r*r*r<<endl;

    } else if (T == 9) {
        int num=1;
        for(int i=0;i<3;i++){
            num+=1;
            num*=2;
        }
        cout<<num;
    } else if (T == 10) {
        cout<<9<<endl;
    } else if (T == 11) {
       cout<<1.0*100/3;
    } else if (T == 12) {
        cout<<13<<endl;
        cout<<"R"<<endl;
    } else if (T == 13) {
        int r1=4,r2=10;
        double pi=3.141593;
        double v=4.0/3*pi*r1*r1*r1+4.0/3*pi*r2*r2*r2;
        v=pow(v,1.0/3); 
        printf("%.0lf\n",v);


    } else if (T == 14) {
        cout<<50;
    }
    return 0;
}