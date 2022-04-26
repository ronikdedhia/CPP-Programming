#include<iostream>
/*
check whether the account type is current or savings and perform the basic operations of bank depending on the bank type
*/
using namespace std;
class account
{
protected:
    int wmoney,dmoney,bal=5000,min_bal=500,acc_no;
    char name[10];
public:
    void inputa()
    {
        cout<<"Enter your name, account no\n";
        cin>>name>>acc_no;
    }
    void dispa()
    {
        cout<<"\nName is "<<name<<"\nAccount no is "<<acc_no<<"\nBalance is "<<bal<<"\nMinimum Balance is "<<min_bal;
    }
    void credit()
    {
        cout<<"\nHow much money you deposit?";
        cout<<"\nEnter 0 if you don't want to Deposit any Money";
        cin>>dmoney;
        bal=bal+dmoney;
        cout<<"\nNew Amount is "<<bal;
    }
    void debit()
    {
        cout<<"\nHow much money you want to withdraw?";
        cout<<"\nEnter 0 if you don't want to Withdraw any Money";
        cin>>wmoney;
        bal=bal-wmoney;
        cout<<"\nNew Amount is"<<bal;
    }
};
class savings:public account
{
protected:
    float interest,inte;
public:
    void inputs()
    {
        interest=4;
        cout<<"At 4% interest rate";
    }
    void cal_inte()
    {
        inte=((interest/100)*bal)+bal;
    }
    void disps()
    {
        cout<<"\nInterest is"<<((interest/100)*bal);
        cout<<"\n\nFinal Balance is "<<inte;
    }
};
class current:public account
{
public:
    void overdraw()
    {
        if(bal>0)
        {
        cout<<"\nYou have not Overdrawed!";
        }
        else
        {
        cout<<"\nYou have OVERDRAWED";
        }
    }
};
int main()
{
   current c;
   int choice;
    savings s;
    cout<<"Enter 1 for Savings Account and 2 for Current Account\n";
    cin>>choice;
    switch(choice)
    {
case 1:
    s.inputa();
    s.dispa();
    s.credit();
    s.debit();
    s.inputs();
    s.cal_inte();
    s.disps();
    break;
case 2:
    c.inputa();
    c.dispa();
    c.credit();
    c.debit();
    c.overdraw();
    break;
default:
    cout<<"\n\nWrong Choice";
    break;
    }
}
