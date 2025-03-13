#include<bits/stdc++.h>
using namespace std;
class transarr{
    private:
    int n;
    int lst[10];
    public:
    transarr(int n){
        this->n = n;
        for(int i=0;i<n;i++){
            lst[i] = 0;
        }
    }
    void input(){
        for(int i=0;i<n;i++){
            cin>>lst[i];
        }
    };
    void swap(transarr a);
    bool operator==(transarr &a){
        for(int i=0;i<n;i++){
            if(this->lst[i]!=a.lst[i]){
                return false;
            }
        }
        return true;
    }
    bool operator!=(transarr a){
        for(int i=0;i<n;i++){
            if(this->lst[i]!=a.lst[i]){
                return true;
            }
        }
        return false;
    }

};

void transarr::swap(transarr a){
    transarr b(n);
    for(int i=0;i<n;i++){
        b.lst[a.lst[i]] = lst[i];
    }
    for(int i=0;i<n;i++){
        lst[i] = b.lst[i];
    }

}








int main(){
    int n;
    while(cin>>n){
        int ans = 0;
        transarr a(n);
        transarr b(n);
        a.input();
        b.input();
        transarr c(n);
        c = a;
        do{
            a.swap(c);
            ans++;
            if(a==b){
                cout<<--ans<<endl;
                break;
            }
            if(a==c){
                cout<<"impossible"<<endl;
                break;
            }
        }
        while(a!=b);
    }
}