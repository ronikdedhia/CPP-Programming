#include<iostream>
/*
perform operator overloading for complex maths
*/
using namespace std;
class complex
{
    int x,y;
public:
    void input()
    {
        cout<<"enter value of x and y\n";
        cin>>x>>y;
    }
    void disp()
    {
        cout<<"x="<<x<<" y="<<y;
    }
    friend complex operator *(complex c7, complex c8);
};
complex operator *(complex c7, complex c8)
    {
        complex ans;
        ans.x=c7.x*c8.x;
        ans.y=c7.y*c8.y;
        return ans;
    }
int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1*c2;
    c3.disp();
    return 0;
}
*/
