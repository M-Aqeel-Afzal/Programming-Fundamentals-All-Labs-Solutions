#include<iostream>
#include<cstring>
using namespace std;
void displaymessage();
int displaymessage(char[],int);
int main()
{
char a[30];
cout<<"greeting without taking input in main function"<<endl;
displaymessage();
cout<<endl<<endl<<"greeting while taking input in main function"<<endl<<endl;
cout<<"enter your name:"<<endl;
cin.getline(a,30);
int d=displaymessage(a,30);
cout<<"number of charactar are "<<d<<endl;
return 0;
}
void displaymessage()
{char a[30];
cout<<"enter your name:"<<endl;
cin.getline(a,30);
cout<<"Hi "<<a<<" Assalam o Alakum! and Good Morning"<<endl;
}
int displaymessage(char a[],int s)
{

int d=strlen(a);
cout<<"Hi "<<a<<" Assalam o Alakum! and Good Morning"<<endl<<endl;

return d;
}
