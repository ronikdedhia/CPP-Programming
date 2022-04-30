#include <iostream>
using namespace std;
int main()
{
	int dist;
	cout<<"What distance will you travel? ";
	cin>>dist;
	if(dist<=5)
		cout<<"Fare is: Rs."<<10;
	else if(dist>5 && dist<10)
		cout<<"Fare is: Rs."<<20;
	else if(dist>=10 && dist<30)
		cout<<"Fare is: Rs."<<50;
	else if(dist>=30 && dist<50)
		cout<<"Fare is: Rs."<<100;
	else if(dist>=50 && dist<80)
		cout<<"Fare is: Rs."<<150;
	else if(dist>=80 && dist<=100)
		cout<<"Fare is: Rs."<<250;
	else
		cout<<"Get off bus";
	return 0;
}
