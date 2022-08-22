//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 9.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{int n,a,b,c,d,e,f,k;
cout<<"enter a number:"<<endl;
cin>>n;
if(n<0)
n=-n;
a=n*n*n+1;
b=-a;
c=-n;
d=-n;
f=-n;
e=d*d*d;
k=f*f*f;
for(;a>=b;a--)
{						if(a>=10)
						cout<<"  "<<a;
						if(a>=-9&&a<0)
						cout<<"  "<<a;
						if(a<=9&&a>=0)
						cout<<"   "<<a;
						if(a<-9)
						cout<<" "<<a;
	cout<<"";
	for(;d<=n+1;d++)
	{if(k==a)
		{if(d>=0||d<0)
		cout<<""<<"*";
		else
		cout<<"  ";}
	else
		cout<<"  ";
		k=d*d*d;
	//if(k==a)
		//{if(d<0)
		//cout<<""<<"*";
		//else
		//cout<<"*";}
	//else
		//cout<<" ";
	}
						cout<<endl;
						f++;d=-n;k=f*f*f;}
cout<<"     ";
	for(;c<=n;c++)
	{if(c>=0)
	cout<<" "<<c;
	else
	cout<<c;}




	
cout<<endl;
					
return 0;
}
