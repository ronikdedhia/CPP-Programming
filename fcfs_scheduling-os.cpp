#include<iostream>
using namespace std;
int main()
{
    int n,p[10],i,wait[10],turn[10];
    float awt=0.0,sum=0.0,average=0.0,summ=0.0;
    cout<<"Enter the number of processes\n";
    cin>>n;
    cout<<"Enter the time of processes\n";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"\nProcess \t Burst Time\n";
    for(i=0;i<n;i++)
    {
        cout<<i+1<<"\t\t"<<p[i]<<endl;
    }
    cout<<"Time taken for each process is:\n"<<endl;
    wait[0]=0;
    for(i=0;i<n;i++)
    {
        wait[i+1]=wait[i]+p[i];
        cout<<wait[i]<<endl;
        sum=sum+wait[i];
    }
    awt=sum/n;
    cout<<"\nAverage Waiting Time is "<<awt;
    for(i=0;i<n;i++)
    {
        turn[i]=wait[i]+p[i];
    }
    cout<<"\nTurn Around Time is \n";
    for(i=0;i<n;i++)
    {
        cout<<turn[i]<<endl;;
        summ=summ+turn[i];
    }
    average=summ/4;
    cout<<"\nAverage turnaround time is "<<average;
    return 0;
}
