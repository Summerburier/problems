#include<bits/stdc++.h>
using namespace std;
class Time{
    private:
    int hour ,minute,second;
    public:
    Time(int _hour ,int _minute ,int _second){
        hour = _hour;
        minute = _minute;
        second = _second;
    }
    Time(string s){
        hour = (s[0]-'0')*10 + (s[1]-'0');
        minute = (s[3]-'0')*10 + (s[4]-'0');
        second = (s[6]-'0')*10 + (s[7]-'0');
    }
    void SetTime(int _hour ,int _minute ,int _second){
        hour = _hour;
        minute = _minute;
        second = _second;

    }
    void ShoweTime(){
        printf("%02d:%02d:%02d\n",hour,minute,second);
    }
};
int main(){
    Time t1(20,25,01);
    Time t2("12:00:00");
    t1.ShoweTime();
    t2.ShoweTime();
    return 0;


}