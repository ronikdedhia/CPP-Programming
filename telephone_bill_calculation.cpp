#include<iostream>
using namespace std;
class TelephoneBill
{
   private:
      int temp, charge;
   public:
      int phone_call(int);
};
int TelephoneBill::phone_call(int ncall)
{
   if(ncall<=150)
      return 0;
   else
   {
      ncall = ncall - 150;
      if(temp<=250)
         charge = temp*1;
      else
      {
         temp = ncall-250;
         charge = 250 + (temp*2);
      }
      return charge;
   }
}

int main()
{
   int calls, amount;
   TelephoneBill b;
   cout<<"Enter Total Number of Calls Made: ";
   cin>>calls;
   amount = b.phone_call(calls);
   cout<<"\nTotal Phone Bill to Paid: "<<amount;
   cout<<endl;
   return 0;
}