//program for finding tables .
#include<iostream>
using namespace std;
int main()
{int n=0,t=0,b=2,s=1;
cout<<"enter the value of n"<<endl;
cin>>n;
for(;b<=n;b++)
{cout<<"*** Table of"<<b<<"***"<<endl;
	for(;s<11;s++)
	{if(s==10)
		{
		t=s*b;
		cout<<s<<"*"<<b<<"="<<t<<endl;
		}
	else
	{
		t=s*b;
		cout<<s<<"*"<<b<<" ="<<t<<endl;
		}
	}
s=1;
cout<<endl<<endl;
}
return 0;
}
