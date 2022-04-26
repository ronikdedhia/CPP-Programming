#include<iostream>
/*
input the basic details of student and calculate his marks
*/
using namespace std;
class student
{
protected :
    int roll_no;
public:
    void inr()
    {
        cout<<"enter roll no  ";
        cin>>roll_no;
    }
    void outr()
    {
        cout<<"your roll no is "<<roll_no;
    }
};
class test:virtual public student
{
protected:
    int sub1,sub2;
public:
    void ins()
    {
        cout<<"enter marks of 2 subjects  ";
        cin>>sub1>>sub2;
    }
    void outs()
    {
        cout<<"\nyour marks are sub1 = "<<sub1<<"\nsub2 = "<<sub2;
    }
};
class sports:virtual public student
{
protected:
    int score,id;
public:
    void inc()
    {
        cout<<"enter your id and marks of sports  ";
        cin>>id>>score;
    }
    void outc()
    {
        cout<<"\nmarks of sports are "<<score<<"\nid is "<<id;
    }
};

class result:public test, public sports
{
    int total;
public:
    void incal()
    {
        total=sub1+sub2+score;
    }
    void outcal()
    {
        cout<<"\nyour total is "<<total;
    }
};
int main()
{
    result r;
    r.inr();
    r.ins();
    r.inc();
    r.incal();
    r.outr();
    r.outs();
    r.outc();
    r.outcal();
    return 0;
}
