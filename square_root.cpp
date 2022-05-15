#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c,root1,root2,delta;
cout<<"enter the value of a,b,c\n";
cin>>a>>b>>c;
cout<<a<<"x*x"<<"+"<<b<<"x"<<"+"<<c;
delta=b*b-4*a*c;
if(delta>0)
{
root1=(-b+sqrt(delta))/(2*a);
root2=(-b-sqrt(delta))/(2*a);
cout<<root1<<root2;                                                                                                                                                                                                                                                                             
}
else if(delta==0)
{
root1=root2=(-b)/(2*a);
cout<<"the answer is \n"<<root1;
}
else
{
cout<<"\nimaginary roots";
}
getch();
}