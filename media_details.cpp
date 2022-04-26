#include<iostream>
/*
input basic media - book or dvd details and calculate the total price for purchasing or renting
*/
using namespace std;
class MediaStore
{
protected:
    int code,price,qty;
    char title[10];
public:
    void inputm()
    {
        cout<<"Enter code, title, price and quantity"<<endl;
        cin>>code>>title>>price>>qty;
    }
    void dispm()
    {
        cout<<"\nCode="<<code<<"\nTitle="<<title<<"Quantity="<<qty<<"\nPrice per unit ="<<price<<endl;
    }
};
class Book:public MediaStore
{
    char genre[10];
    int totall;
    float ratings;
public:
    void inputb()
    {
    cout<<"Enter genre and rating out of 5"<<endl;
    cin>>genre>>ratings;
    }
    int calbill()
    {
       totall=price*qty;
       return totall;
    }
    void updateq()
    {
        int q;
        cout<<"Update quantity"<<endl;
        cin>>q;
        qty+=q;
    }
    void dispb()
    {
        cout<<"Genre="<<genre<<endl<<"Rating="<<ratings<<endl<<"New quantity is "<<qty<<endl<<"\nBill is "<<totall<<endl;
    }
};
class dvd:public MediaStore
{
    float length;
    int days,pr,pay;
    char type[10];
public:
    void inputd()
    {
        cout<<"Enter length only"<<endl;
        cin>>length;
    }
    int rental()
    {
        cout<<"Enter no of days"<<endl;
        cin>>days;
        pay=days*50;
        return pay;
    }
    int purchase()
    {
        pay=qty*price;
        return pay;
    }
    void dispd()
    {
        cout<<"Length="<<length<<endl<<"Days="<<days<<endl<<"Price="<<price<<endl<<"Quantity"<<qty;
        cout<<"\nPay="<<pay<<endl;
    }
};
int main()
{
    Book b1;
    dvd d1;
    int ch;
    cout<<"Enter choice\t"<<"1.Books 2.DVDs"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<endl<<"You have selected Books";
        b1.inputm();
        b1.dispm();
        b1.inputb();
        b1.calbill();
        b1.updateq();
        b1.dispb();
        break;
    case 2:
        cout<<endl<<"You have selected DVDs";
        d1.inputm();
        d1.dispm();
        d1.inputd();
        d1.rental();
        d1.purchase();
        d1.dispd();
        break;
default:
        cout<<endl<<"Wrong Choice";
    }
}
