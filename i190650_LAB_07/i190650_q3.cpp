#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int Ao=10000,n=12,t;
float r=0.08,A;
cout<<"enter number of years"<<endl;
cin>>t;
A=Ao*(pow((1+r/n),n*t));
cout<<"final amount="<<A<<endl;
return 0;
}
