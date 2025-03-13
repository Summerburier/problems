#include<bits/stdc++.h>
using namespace std;
class point {
    private:
    double _x,_y;
    public:
    void init (double x, double y){
        _x = x;
        _y = y;
    }
    double x()  {
        return _x;
    }
    double y()  {
        return _y;
    }
    bool cpm(point &p);
       
  
};
bool point::cpm(point &p){
    double __x = p._x;
    double __y = p._y;
    if(_x!=__x){
        return _x<__x;
    }
    else{
        return _y<__y;
    }
}
void bbsort(point *p,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(!p[j].cpm(p[j+1])){
                point temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
int main(){
    point points[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double x,y;
        cin>>x>>y;
        points[i].init(x,y);
    }
    bbsort(points,n);
    for(int i=0;i<n;i++){
        cout<<points[i].x()<<" "<<points[i].y()<<endl;
    }
}
