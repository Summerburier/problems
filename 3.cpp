#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int score1;
        int score2;
        int score3;
        float average;
        int rank;
    public:
    void ave()
    {
        average=(score1+score2+score3)*1.0/3;
    }
    Student() : name(""), age(0), score1(0), score2(0), score3(0), average(0), rank(0) {}

    Student(string name,int age,int score1,int score2,int score3)
    {
        this->name=name;
        this->age=age;
        this->score1=score1;
        this->score2=score2;
        this->score3=score3;
        ave();
    }
    bool operator<(const Student &s) const
    {
        return this->average < s.average;
    }
    void cout(ofstream &out)
    {
        out<<name<<" "<<age<<" "<<score1<<" "<<score2<<" "<<score3<<" "<<fixed<<setprecision(0)<<average<<" "<<rank<<endl;
    }
    void binout(ofstream &out)
    {
        out.write((char*)&name,sizeof(name));
        out.write(" ",1);
        out.write((char*)&age,sizeof(age));
        out.write(" ",1);
        out.write((char*)&score1,sizeof(score1));
        out.write(" ",1);
        out.write((char*)&score2,sizeof(score2));
        out.write(" ",1);
        out.write((char*)&score3,sizeof(score3));
        out.write(" ",1);
        out.write((char*)&average,sizeof(average));
        out.write(" ",1);
        out.write((char*)&rank,sizeof(rank));
        out.write("\n",1);
    }
    static void stsort(Student s[],int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]<s[j])
                {
                    swap(s[i],s[j]);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            s[i].rank=i+1;
        }
    }
};
int main(){
    Student s[100];
    int n = 0;
    ifstream fin("./student.txt");
    string line;
    while(getline(fin, line)){
        istringstream iss(line);
        string name;
        int age, score1, score2, score3;
        iss >> name >> age >> score1 >> score2 >> score3;
        s[n] = Student(name, age, score1, score2, score3);
        n++;
    }
    Student::stsort(s,n+1);
    ofstream fout("./student_sort.txt",ios::app);
    ofstream binout("./student_sort.dat",ios::binary);
    fout<<"姓名"<<" "<<"年龄"<<" "<<"成绩1"<<" "<<"成绩2"<<" "<<"成绩3"<<" "<<"平均分"<<" "<<"名次"<<endl;
    binout.write("姓名",sizeof("姓名"));
    binout.write(" ",1);
    binout.write("年龄",sizeof("年龄"));
    binout.write(" ",1);
    binout.write("成绩1",sizeof("成绩1"));
    binout.write(" ",1);
    binout.write("成绩2",sizeof("成绩2"));
    binout.write(" ",1);
    binout.write("成绩3",sizeof("成绩3"));
    binout.write(" ",1);
    binout.write("平均分",sizeof("平均分"));
    binout.write(" ",1);
    binout.write("名次",sizeof("名次"));
    binout.write("\n",1);
    for(int i=0;i<n;i++)
    {
        s[i].cout(fout);

    }
}