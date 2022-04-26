#include<iostream>
/*
make template for basic maths calculations
*/
using namespace std;
template<class T>
class calc
{
    T n1,n2;
public:
    calc(T a, T b)
    {
        n1=a;
        n2=b;
    }
    T add() {return n1+n2;}
    T sub() {return n1-n2;}
    T mul() {return n1*n2;}
    T div() {return n1/n2;}
    void disp()
    {
        cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
        cout<<"\nadd is "<<add();
        cout<<"\nsub is "<<sub();
        cout<<"\nmul is "<<mul();
        cout<<"\ndiv is "<<div();
    }
};
int main()
{
    calc<int> obji(10,2);
    calc<float>objf(10.6,2.2);
    obji.disp();
    objf.disp();
}
