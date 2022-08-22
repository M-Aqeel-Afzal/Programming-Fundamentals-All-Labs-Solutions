#include<iostream>
using namespace std;
int perfect(int);
int main()
{
for(int i=2;i<1000;i++)
{
perfect(i);}
return 0;
}
int perfect(int a)
{ int h=0;
for(int j=1;j<a;j++)
{if(a%j==0)
h=h+j;}
if(h==a)
cout<<endl<<a<<" is a perfect number"<<endl;
return h;}
