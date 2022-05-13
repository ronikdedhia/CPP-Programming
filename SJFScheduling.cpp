#include <iostream>
using namespace std;

int main()
{
      int AT[10], BT[10], temp[10];
      int i, small, count = 0, T, limit;
      double WT = 0, TAT = 0, end;
      float AWT, A_TAT;
      cout<<"Enter the Total Number of Processes:";
      cin>>limit;
      cout<<"Enter "<<limit<<" process"<<endl;
      for(i = 0; i < limit; i++)
      {
	    cout<<"\nEnter Arrival T:";
	    cin>>AT[i];
	    cout<<"Enter Burst T:";
	    cin>>BT[i];
	    temp[i] = BT[i];
      }
      for(T = 0; count != limit; T++)
      {
	    small = 4;
	    for(i = 0; i < limit; i++)
	    {
		  if(AT[i] <= T && BT[i] < BT[small] && BT[i] > 0)
		  {
			small = i;
		  }
	    }
	    BT[small]--;
	    if(BT[small] == 0)
	    {
		  count++;
		  end = T + 1;
		  WT = WT + end - AT[small] - temp[small];
		  TAT = TAT + end - AT[small];
	    }
      }
      AWT = WT / limit;
      A_TAT = TAT / limit;
      cout<<"Average Waiting T:"<<AWT<<endl;
      cout<<"Average Turnaround T:"<<A_TAT;
}
