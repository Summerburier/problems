#include<bits/stdc++.h>
using namespace std;
double A ,B , C ,delta;
int main ()
{
    double a,b,c,d,answer1,answer2,answer3;
    cin>>a>>b>>c>>d;
    A=pow(b,2)-3*a*c;
    B=b*c-9*a*d;
    C=pow(c,2)-3*b*d;
    delta=pow(B,2)-4*A*C;
    if(A==B&&A==0&&B==0){
        answer1=-b/(3*a);
        printf("%.2lf",answer1);
    }
    else if (delta=0)
    {
        double K;
        K=B/A;
        answer1=-b/a+K;
        answer2=-K/2;
        printf("%.2lf %.2lf",min(answer1,answer2),max(answer1,answer2));


    }
    else{
        double T,theta;
        T=(2*A*b-3*a*B)/(2*pow(A,1.5));
        theta=acos(T);
        double x[3];
        x[0]=((-b-2*pow(A,0.5)*cos(theta/3))/(3*a));
        x[1]=(-b+pow(A,0.5)*(cos(theta/3)+pow(3,0.5)*sin(theta/3)))/(3*a);
        x[2]=(-b+pow(A,0.5)*(cos(theta/3)-pow(3,0.5)*sin(theta/3)))/(3*a);
        sort(x,x+3,less<double>());
        for(int i=0;i<3;i++){
            printf("%.2lf ",x[i]);
        }
    }
    
}