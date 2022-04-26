#include<iostream>
/*
input employee details and calculate the ma, ea, da, hra and gross salary of the employee
*/
using namespace std;
struct Emp
{
private:
    int code,ma,ea,basic,ron;
    float da,hra,gross,r;
    char name[10],grade;
public:
    void input();
    void display();
    void gross_sal();
    void allow();
    void all();
};
void Emp::input()
{
    cout<<"enter name, code and basic salary:\n";
    cin>>name>>code>>basic;
}
void Emp::display()
{
    cout<<"entered details are:\n";
    cout<<"name-"<<name<<"\ncode-"<<code<<"\nbasic salary-"<<basic;
}
void Emp::all()
{
    cout<<"\nenter your grade from a,b,c,d\n";
    cin>>grade;
    switch(grade)
    {
    case 'a':
    case 'A':
        ma=5000;
        ea=1500;
        ron=ma+ea;
        break;
    case 'b':
    case 'B':
        ma=4000;
        ea=1000;
        ron=ma+ea;
        break;
    case 'c':
    case 'C':
        ma=3000;
        ea=800;
        ron=ma+ea;
        break;
    case 'd':
    case 'D':
        ma=1500;
        ea=400;
        ron=ma+ea;
        break;
    default:
        cout<<"wrong choice";
    }
    cout<<"\nma+ea = "<<ron;
}
void Emp::allow()
{
    hra=0.35*basic;
    da=0.50*basic;
    r=hra+da;
    cout<<"\nhra+da = "<<r;
}
void Emp::gross_sal()
{
    gross=basic+ron+r;
    cout<<"\nGROSS SALARY = "<<gross;
}
int main()
{
    struct Emp e;
    e.input();
    e.display();
    e.all();
    e.allow();
    e.gross_sal();
}
