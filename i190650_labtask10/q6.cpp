#include<iostream>
using namespace std;
int main()
{int z[10],a,b,c,sum=0,n;
cout<<"enter the values of array;"<<endl;
for(int j=0;j<10;j++)
{cin>>z[j];
a=z[j];}
for(int j=0;j<10;j++)
{while(z[j]>0)
{a=z[j]%10;
z[j]=z[j]/10;}
sum=sum+a;}
cout<<"output is :"<<sum<<endl;
return 0;
}
