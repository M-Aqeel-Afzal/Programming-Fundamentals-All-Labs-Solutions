#include<iostream>
using namespace std;
int fun(int a)
{
int g=0,l=1,v;
if(a==1)
cout<<g;
if(a==2)
cout<<" "<<l<<" ";
if(a>2)
{for(int i=3;i<=a;i++)
{
v=l+g;

g=l;
l=v;}
cout<<v;}}
int main()
{int n;
cout<<"enter the nth term"<<endl;
cin>>n;
int k=fun(n);

return 0;
}
