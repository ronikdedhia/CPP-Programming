#include<iostream>
/*
depending on the type of the typist - regular or casual, calculate the wages
*/
using namespace std;
class typist
{
    int speed;
    char name[10];
public:
    void inputt()
    {
    cout<<"\n\nEnter your name and speed in words per minute\n";
    cin>>name>>speed;
    }
    void dispt()
    {
        cout<<"\nName is "<<name<<"\nSpeed is "<<speed<<" words per minute";
    }
};
class regular:public typist
{
    float basic,id,hra,da,gross;
public:
    void inputr()
    {
        cout<<"\nEnter your id and basic salary ";
        cin>>id>>basic;
    }
    void calcr()
    {
        hra=0.15*basic;
        da=0.25*basic;
        gross=basic+hra+da;
    }
    void dispr()
    {
        cout<<"\nId is "<<id<<"\nhra is "<<hra<<"\nda is "<<da<<"\nGross Salary is "<<gross;
    }
};
class casual:public typist
{
    float wages,rate;
    int hours;
public:
    void inputc()
    {
        cout<<"\nEnter number of hours worked, and rate of each hour";
        cin>>hours>>rate;
    }
    void calc()
    {
        if(hours>40)
        {
            wages=1.5*hours*rate;
        }
        else
        {
            wages=hours*rate;
        }
    }
    void dispc()
    {
        cout<<"\nYou have worked for "<<hours<<" hours at Rs "<<rate<<" per hour";
        cout<<"\nYour salary is "<<wages;
    }
};
int main()
{
    regular r;
    casual c;
    int choice;
    cout<<"Welcome to Typers Community\n";
    cout<<"\nEnter 1 for Regular Typist and 2 for Casual Typist\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"\nYou have selected Regular Typist";
        r.inputt();
        r.dispt();
        r.inputr();
        r.calcr();
        r.dispr();
        break;
    case 2:
        cout<<"\nYou have selected Casual Typist";
        c.inputt();
        c.dispt();
        c.inputc();
        c.calc();
        c.dispc();
        break;
    default:
        cout<<"\nProgram Exited";
    }
}
