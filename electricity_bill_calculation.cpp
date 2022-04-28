#include<iostream>
/*
calculate the total bill depending on the units consumed
*/
using namespace std;
class units
{
    int no,units;

    char name[10];
public:
    float price;
    void inputU();
    void dispU();
    void logic();
};
void units::inputU()
{
    cout<<"enter your customer number, name and units consumed\n";
    cin>>no>>name>>units;
}
void units::dispU()
{
    cout<<name<<"\t"<<no<<"\t\t"<<units<<"\t\t"<<price<<"\n";
}
void units::logic()
{
    if(units>=0 && units<=200)
    {
        price=50+(0.50*units);
    }
    else if(units>=201 && units<=400)
    {
        price=100+(0.65*(units-200));
    }
    else if(units>=401 && units<=600)
    {
        price=230+(0.80*(units-400));
    }
    else
    {
        price=390+(1*(units-600));
    }
    cout<<"your total bill amount is RS "<<price;
}
int main()
{;
    units u1[4];
    int n,i;
    int tot;
    cout<<"enter total no of customers";
    cin>>n;
    for(i=0;i<n;i++)
    {
        u1[i].inputU();
    }

    cout<<"YOUR BILL IS\n\n";
        for(i=0;i<n;i++)
    {
        u1[i].logic();
    }
    cout<<"\n\nname \tcustomer no\tunits consumed\tbill\n\n";
    for(i=0;i<n;i++)
    {
        u1[i].dispU();
    }

    return 0;
}
