#include <iostream>
using namespace std;
int main()
{
    double room_charge;
    double total_resort_fee;
    double total_charge;
    double resort_tax;
    double deposit;
    double checkin;
    cout << " Length of stay = 6 days \n";
    cout << " Daily Rate = $100 \n";
    cout << " Daily Resort Fee = $10 \n";
    cout << " Resort Tax Rate = 0.085 \n";
    cout << "Itemized Bill:\n";
    room_charge = 6 * 100;
    total_resort_fee = 10 * 6;
    total_charge = room_charge + (total_resort_fee) + 56.1;
    resort_tax = 0.085 * (total_charge);
    deposit = 66;
    checkin = total_charge - deposit;
    cout << "Total Room Charge = "<<room_charge<<endl;
    cout << "Total Resort Fee = " << total_resort_fee <<endl;
    cout << "Total Resort Tax = " << resort_tax <<endl;
    cout << "Total Bill = " << total_charge<<endl;
    cout << "Total deposit =" << deposit<<endl;
    cout << " Amount due at check in =" << checkin<<endl;
    return 0;
}