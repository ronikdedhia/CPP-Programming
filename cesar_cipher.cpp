#include<iostream>
using namespace std;
int main()
{
    int k,n;
    char a[20];
    cout<<"How many alpha enter";
    cin>>n;
    cout<<"key : ";
    cin>>k;
    int i;
    cout<<"enter plain text :\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Plain";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]+k;
            if(a[i]>'z')
            {
                a[i]=a[i]-'z'+'a'- 1;
            }
	}
    }
    cout<<"\ncipher : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<"\nDecrypted Text : \n";
    for(i=0;i<n;i++)
    {
        a[i]=a[i]-k;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
