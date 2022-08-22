//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 8.
#include<iostream>
using namespace std;
int main()
{int n,a,b,c,d;
cout<<"enter a number;"<<endl;
cin>>n;
a=n*n;
b=-n;
c=-n;
d=-n;
for(;a>=0;a--)
{if(a<10)
cout<<"0"<<a;
else 
cout<<a;
cout<<"   ";
	for(;c<=n;c++)
	{
	if(a==(c*c))
		{if(c>0)
	cout<<" "<<"*";
	else
	cout<<"*";}
else
{if(c>=0)
cout<<"  ";
else
cout<<"  ";}	
}
c=b;
	cout<<endl;}
cout<<"    ";
for(;b<=n;b++)
{if(b>=0)
cout<<" "<<b;
else
cout<<b;}
cout<<endl;

return 0;
}
