#include<iostream>
using namespace std;
/*
enter the product details from warehouse and calculate the total cost of all the products using array of objects
*/
class product
{
    int qty,code;
    char name[10];
    float price;
public:
    void inputP();
    void dispP();
    float investP();
};
void product::inputP()
{
    cout<<"enter code, name, price and quantity\n";
    cin>>code>>name>>price>>qty;
}
void product::dispP()
{
    cout<<code<<"\t"<<name<<"\t"<<price<<"\t"<<qty<<"\n";
}
float product::investP()
{
    return(qty*price);
}
int main()
{
    int n,i;
    float sum;
    product p[10];
    cout<<"total no of products?\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        p[i].inputP();
    }
    cout<<"code\tname\tprice\tquantity\n";
    for(i=0;i<n;i++)
    {
        p[i].dispP();
    }
    for(i=0;i<n;i++)
    {
        p[i].investP();
        sum+=p[i].investP();
    }
    cout<<"total investment ="<<sum;
    return 0;
}
