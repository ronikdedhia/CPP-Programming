#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char plain[15];
    int i=0, length, en;
    cout<<"Enter the plain text \n";
    gets(plain);
    length = strlen(plain);
    cout<<"Enter the key\n";
    cin>>en;
    cout<<"the length is "<<length<<endl<<endl;
    for(i=0; i<length; i++)
    {
        cout<<plain[i];
    }
    for(i=0; (i<=100 && plain[i]!='\0'); i++)
    {
        if(plain[i]>='a' && plain[i]<='z')
        {
            plain[i]=plain[i]+en;
            if(plain[i]>'z')
            {
                plain[i]=plain[i]-'z'+'a'-1;
            }
        }
        else
        {
            plain[i] = 32;
        }
    }
    cout<<endl<<endl<<plain<<endl;

    cout<<"The decrypted key is :";
    for(i=0; (i<=20 && plain[i]!='\0'); i++)
    {
        if(plain[i]>='a' && plain[i]<='z')
        {
            plain[i]=plain[i]-en;
            if(plain[i]<'a')
            {
                plain[i]=plain[i]+'z'-'a'+1;
            }
        }
        else
        {
            plain[i] = 32;
        }
    }
    cout<<endl<<plain;
    return 0;
}
