#include<iostream>
/*
track the number of objects created and destroyed
*/
using namespace std;
class Integer
{
    int x,y;
public:
    static int counte;
    Integer();
    Integer(int a,int b);
    void disp();
    ~Integer()
{
    --counte;
    cout<<"\nobject destroyed";
    cout<<"\ncount is minusing"<<counte;
}
 Integer(Integer &obj)
{
    cout<<"\nInside copy constructor";
    x=obj.x;
    y=obj.y;
    counte++;
}
Integer(int a)
{
    x=y=a;
    counte++;
}
};
int Integer::counte;
Integer::Integer()
{
    x=0;
    y=0;
    counte++;
}
Integer::Integer(int a,int b)
{
    x=a;
    y=b;
    counte++;
}
void Integer::disp()
{
    cout<<"\nx="<<x<<"\ny="<<y;
    cout<<"\n\ncount="<<counte;
}

int main()
{
    Integer i1(2,5);
    Integer i2(2);
    Integer i3(i1);
    i1.disp();
    i2.disp();
    i3.disp();
}
