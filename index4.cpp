#include <bits/stdc++.h>
using namespace std;


class Date{

private:

    int year, month, day;

public:

    Date(int y=1900,int m=1,int d=1):year(y),month(m),day(d){}

    void  set(int y=1900,int m=1,int d=1){

        year =y; month = m; day = d;

    }

    bool isLeapYear() const; //完成设计

    friend bool operator<(const Date &, const Date &);//完成设计

    Date & operator++();//完成设计

    const Date operator++(int);//完成设计

    friend ostream & operator<<(ostream &os, Date d);//完成设计

};



bool Date::isLeapYear() const{

    if(year%4==0 && year%100!=0 || year%400==0){

        return true;

    }else{

        return false;

    }

}

bool operator<(const Date &d1, const Date &d2){

    if(d1.year!=d2.year){

        return d1.year<d2.year;

    }else if(d1.month!=d2.month){

        return d1.month<d2.month;

    }else{

        return d1.day<d2.day;

    }

}

Date & Date::operator++(){
    
        if(month==2){
    
            if(isLeapYear()){
    
                if(day==29){
    
                    month++;
    
                    day=1;
    
                }else{
    
                    day++;
    
                }
    
            }else{
    
                if(day==28){
    
                    month++;
    
                    day=1;
    
                }else{
    
                    day++;
    
                }
    
            }
    
        }else if(month==4 || month==6 || month==9 || month==11){
    
            if(day==30){
    
                month++;
    
                day=1;
    
            }else{
    
                day++;
    
            }
    
        }else{
    
            if(day==31){
    
                month++;
    
                day=1;
    
            }else{
    
                day++;
    
            }
    
        }
    
        return *this;

}

const Date Date::operator++(int n){

    Date d=*this;

    for(int i=0;i<n;i++){

        ++d;

    }

    return d;

}

ostream & operator<<(ostream &os, Date d){
    os<<d.year<<"-"<<d.month<<"-"<<d.day;
    return os;

}

int main()

{

    Date d1(2025,11,23),d2;

    cout<<++d1<<endl;

    d2 = d1++;

    cout<<d2<<endl;

    return 0;

}