#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
clrscr();
ifstream fs;
ofstream ft;
char filename1[100],filename2[100],ch;
cout<<"Enter the name of the  file to read\n";
gets(filename1);
cout<<"Enter the name of the file to write\n";
gets(filename2);
fs.open(filename1);
ft.open(filename2);
if(!fs)
{
cout<<"error in opening source file\n";
getch();
}
if(!ft)
{
cout<<"error in opening destination file\n";
getch();
}
while(fs.eof()==0)
{
fs>>ch;
ft<<ch;
}
cout<<"File copied succesfully\n";
fs.close();
ft.close();
getch();
}