#include<iostream.h>
#include<conio.h>
inline float avg(int a,int b,int c)
{
cout<<"sum is "<<a+b+c;
cout<<"avg is "<<(a+b+c)/3.0;
return 0;
}
void main()
{
int a,b,c;
clrscr();
cout<<"enter a,b and c";
cin>>a>>b>>c;
avg(a,b,c);
getch();
}