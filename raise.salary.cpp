#include<iostream>
/*
raise salary of employee
*/
using namespace std;
class person
{
    char dob[15];
    char city[10], name[10];
public:
    void inputp()
    {
        cout<<"pls enter your date of birth, name and city\n";
        cin>>dob>>name>>city;
    }
    void disp()
    {
        cout<<"your name is "<<name<<"\ndob is "<<dob<<"\ncity is "<<city<<endl;
    }
};
class employee:public person
{
    int code,sal;
public:
    void inpute()
    {
        cout<<"enter code and salary\n";
        cin>>code>>sal;
    }
    void dispe()
    {
        cout<<"code="<<code<<"\nsalary="<<sal<<endl;
    }
    void raiseSal()
    {
        float per;
        cout<<"enter percentage of raise";
        cin>>per;
        sal=sal+((per/100)*sal);
        cout<<"new sal is "<<sal;
    }
};
int main()
{
    employee e1;
    e1.inputp();
    e1.inpute();
    e1.disp();
    e1.dispe();
    e1.raiseSal();
}
