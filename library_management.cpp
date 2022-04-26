#include<iostream>
#include<stdlib.h>
/*
develop a library management system to input book details, update price and quantity of books, display details and calculate the total of all books
*/
using namespace std;
class Book
{
private:
    int book,price;
    char title[20],author[30];
public:
    void inputB();
    void dispB();
    void updatep(float p);
    void updateq(int q);
    void invest();
};
void Book::inputB()
{
    cout<<"enter title, author, quantity and price\n";
    cin>>title>>author>>book>>price;
}
void Book::dispB()
{
    cout<<"entered details are:";
    cout<<"name-"<<title<<"\nauthor-"<<author<<"\nquantity-"<<book<<"\nprice-"<<price;
}
void Book::updatep(float p)
{
    price=price+p;
}
void Book::updateq(int q)
{
    book=book+q;
}
void Book::invest()
{
    cout<<"Total cost of all the books is"<<price*book;
}
int main()
{
    int choice;
    Book b1;
    while(1)
    {
    cout<<"\nenter choice\n1.input\n2.display\n3.update price\n4.update quantity\n5.invest\npress any other no to exit\n" ;
    cin>>choice;
switch(choice)
{
    case 1:
    b1.inputB();
    break;
case 2:
    b1.dispB();
    break;
case 3:
    float p;
    cout<<"enter addition of price";
    cin>>p;
    b1.updatep(p);
    break;
case 4:
    int q;
    cout<<"enter quantity";
    cin>>q;
    b1.updateq(q);
    break;
case 5:
    b1.invest();
    break;
default:
    exit(0);
}
}
}
